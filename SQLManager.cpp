#include "SQLManager.h"
SQLManager* SQLManager::instance = nullptr;



SQLManager::SQLManager()
{
    cout << "SQL Manager up and running." << endl;
}

SQLManager& SQLManager::getInstance()
{
    if (instance == nullptr)
        instance = new SQLManager;
    return *instance;
}

MYSQL* SQLManager::conectare()
{
    MYSQL* conect;
    conect = mysql_init(0);
    conect = mysql_real_connect(conect, "localhost", "root", "parola", "proiectpoo", 3306, NULL, 0);
    return conect;
}

void SQLManager::afisAdmin()
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
    MYSQL* conectare = this->conectare();
	cout << "**afisare admini\n";
	string query_afisareAdmin = "select *from proiectpoo.admin;";
	const char* q = query_afisareAdmin.c_str();
	int qstare = mysql_query(conectare, q);

	if (!qstare)
	{
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		while (rand)
		{
			cout << "\n";
			cout << "id:" << rand[0] << " \n";
			cout << "nume " << rand[1] << " \n";
			cout << "prenume:" << rand[2] << "\n";
			cout << "email:" << rand[3] << "\n";
			cout << "parola:" << rand[4] << "\n";
			rand = mysql_fetch_row(rezultat);
		}
	}
}

//void SQLManager::afisAngajator()
//{
//	MYSQL_RES* rezultat,*rezultat1;
//	MYSQL_ROW rand;
//	MYSQL* conectare = this->conectare();
//	string query_afisareaAplicat = " select* from proiectpoo.angajat ;";
//	const char* q2 = query_afisareaAplicat.c_str();
//	int qstare = mysql_query(conectare, q2);
//	MYSQL_ROW  rand1;
//
//	if (!qstare)
//	{
//		rezultat = mysql_store_result(conectare);
//		rand = mysql_fetch_row(rezultat);
//		while (rand)
//		{
//			cout << "\n";
//			cout << "id:" << rand[0] << " \n";
//			cout << "nume" << rand[1] << " \n";
//			cout << "prenume" << rand[2] << "\n";
//			cout << "email:" << rand[3] << "\n";
//			cout << "parola:" << rand[4] << "\n";
//			if (rand[5] != NULL)
//			{
//				cout << "idCv:" << rand[5] << "\n";
//				cout << "afisare cv";
//				int i = atoi(rand[0]);
//				string j = to_string(i);
//				string query_afisareaCV = "select* from proiectpoo.cv where proiectpoo.cv.idCV='" + j + "'";
//				const char* q3 = query_afisareaCV.c_str();
//				int qstare1 = mysql_query(conectare, q3);
//				if (!qstare1)
//				{
//					rezultat1 = mysql_store_result(conectare);
//					rand1 = mysql_fetch_row(rezultat1);
//					while (rand1)
//					{
//						cout << "\n";
//						cout << "\n";
//						cout << "idCV:" << rand1[0] << " \n";
//						cout << "nume: " << rand1[1] << " \n";
//						cout << "prenume:" << rand1[2] << "\n";
//						cout << "studii superioare:" << rand1[3] << "\n";
//						cout << "liceu :" << rand1[4] << "\n";
//						cout << "domenii in care activat:" << rand1[5] << " \n";
//						cout << "experienta" << rand1[6] << "\n";
//						cout << "permis" << rand1[7] << "\n";
//						cout << "tel:" << rand1[8] << "\n";
//						cout << "alte informatii:" << rand1[9] << "\n";
//						cout << "\n";
//						rand1 = mysql_fetch_row(rezultat1);
//					}
//				}
//			}
//			rand = mysql_fetch_row(rezultat);
//			cout << "\n";
//		}
//	}
//}
//
bool SQLManager::autentificareUser(string email, string pass)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand, rand1;
	MYSQL* conectare = this->conectare();

	string query_verifAplicant = " select count(*)  from proiectpoo.angajator where email = '" + email + "' and parola='" + pass + "'";
	const char* q6 = query_verifAplicant.c_str();
	int qstare = mysql_query(conectare, q6);
	rezultat = mysql_store_result(conectare);
	rand = mysql_fetch_row(rezultat);
	if (strcmp(rand[0], "1") != 0)
	{
		string query_verifAplicant = " select count(*)  from proiectpoo.angajat where email = '" + email + "' and parola='" + pass + "'";
		const char* q7 = query_verifAplicant.c_str();
		int qstare = mysql_query(conectare, q7);
		rezultat = mysql_store_result(conectare);
		rand1 = mysql_fetch_row(rezultat);
		if (strcmp(rand1[0], "1") != 0)
			return true;
	}
	
 return false;


}

bool SQLManager::isEmail(string email)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand,rand1;
	MYSQL* conectare = this->conectare();
	string query_verifEmail = " select count(*)  from proiectpoo.angajator where email = '" + email + "'";
	const char* q6 = query_verifEmail.c_str();
	int qstare = mysql_query(conectare, q6);
	rezultat = mysql_store_result(conectare);
	rand = mysql_fetch_row(rezultat);
	if (strcmp(rand[0], "1") != 0)
	{
		query_verifEmail = " select count(*)  from proiectpoo.angajat where email = '" + email + "'";
		const char* q6 = query_verifEmail.c_str();
		qstare = mysql_query(conectare, q6);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		if (strcmp(rand[0], "1") != 0)
			return false;

		
	}
	return true;
	
}

bool SQLManager::inregistrareAngajat(string email, string parola, string nume, string prenume)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();

	string query_verifAplicant = " select count(*)  from proiectpoo.angajat where email = '" + email + "'";
	const char* q7 = query_verifAplicant.c_str();
	int qstare = mysql_query(conectare, q7);
	rezultat = mysql_store_result(conectare);
	rand = mysql_fetch_row(rezultat);
    bool isEMAIL = this->isEmail(email);
	if (strcmp(rand[0],"1")!=0)
	{
		string query_inregistAngajat = " insert into proiectpoo.angajat(email,parola,nume,prenume) values('" + email + "','" + parola + "','" + nume + "','" + prenume + "');";
		const char* q6 = query_inregistAngajat.c_str();
		int qstare = mysql_query(conectare, q6);
		rezultat = mysql_store_result(conectare);
		return true;
	}

	return false;
}


bool SQLManager::inregistrareAngajator(string email, string parola, string numeCompanie)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();


	bool isEMAIL = isEmail(email);
	if (isEMAIL == false)
	{
		
		string query_inregistAngjator = "insert into proiectpoo.angajator(email,parola,numeCompanie) values('" + email + "','" + parola + "','" + numeCompanie + "');";
		const char* q6 = query_inregistAngjator.c_str();
		int qstare = mysql_query(conectare, q6);
		rezultat = mysql_store_result(conectare);
		return true;
	}
	return false;

}
//bool SQLManager::deleteUser(string email, string parola)
//{
//	MYSQL_RES* rezultat,*rez;
//	MYSQL_ROW rand;
//	MYSQL* conectare = this->conectare();
//
//	string query_deleteAngjator = " delete from  proiectpoo.anagajat where parola='" + parola + "'and email='" + email + "'";
//	const char* q6 = query_deleteAngjator.c_str();
//	int qstare = mysql_query(conectare, q6);
//	rezultat = mysql_store_result(conectare);
//	if (rezultat != NULL)
//		return true;
//	else
//	{
//		string query_deleteAngajator = " delete from  proiectpoo.angajator where parola='" + parola + "'and email='" + email + "'";
//		const char* q6 = query_deleteAngajator.c_str();
//		int qstare = mysql_query(conectare, q6);
//		rez = mysql_store_result(conectare);
//		if (rez != NULL)
//		{
//			return true;
//		}
//	}
//		return false;
//}
//
///*bool SQLManager::verificPerecheAngajat(string email, string parola)
//{
//	MYSQL_RES* rezultat;
//	MYSQL_ROW rand;
//	MYSQL* conectare = this->conectare();
//
//	string veri = " select count  proiectpoo.angajatat where email=" + email + "' and parola='" + parola + "'";
////	const char* q6 = veri.c_str();
////	int qstare = mysql_query(conectare, q6);
//	rezultat = mysql_store_result(conectare);
//
//	if (strcmp(rand[0], "1") == 0)
//		return true;
//	else return false;
//}*/

int SQLManager::procesareCereriClient(vector<string> vec)
{
	bool functie;
	string codFunctie = vec[0];
	if (vec[0] == "1")
	{
		if (vec[vec.size()-1] == "2")
		{
			functie=this->inregistrareAngajator(vec[1], vec[2], vec[3]);
			if (!functie) return 1;
		}
		if (vec[vec.size() - 1] == "3")
		{
			functie=this->inregistrareAngajat(vec[1], vec[2], vec[3], vec[4]);
			if (!functie) return 2;
		}
		
	}
	else if (vec[0] == "2")
	{
	        functie = this->autentificareUser(vec[1], vec[2]);
			if (functie)
			return 1;
	}
	else if (vec[0] == "5")
	{
		functie = isEmail(vec[1]);
		if (functie)
			return 3;

	}

	
}

bool SQLManager::inregistrareCv(string nume,string NrTel,string adresa,string judet,string dataNastere,string prenume,string Email,string oras,string studii,string institutie,string perioadastrat,string perioadaoff,string fct,string angajator,string perioadadela,string domeniu,string panala)
{
	return false;
}
