#include "SQLManager.h"
SQLManager* SQLManager::instance = nullptr;
#include<string>



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

void SQLManager::afisAngajator()
{
	MYSQL_RES* rezultat,*rezultat1;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	string query_afisareaAplicat = " select* from proiectpoo.angajat ;";
	const char* q2 = query_afisareaAplicat.c_str();
	int qstare = mysql_query(conectare, q2);
	MYSQL_ROW  rand1;

	if (!qstare)
	{
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		while (rand)
		{
			cout << "\n";
			cout << "id:" << rand[0] << " \n";
			cout << "nume" << rand[1] << " \n";
			cout << "prenume" << rand[2] << "\n";
			cout << "email:" << rand[3] << "\n";
			cout << "parola:" << rand[4] << "\n";
			if (rand[5] != NULL)
			{
				cout << "idCv:" << rand[5] << "\n";
				cout << "afisare cv";
				int i = atoi(rand[0]);
				string j = to_string(i);
				string query_afisareaCV = "select* from proiectpoo.cv where proiectpoo.cv.idCV='" + j + "'";
				const char* q3 = query_afisareaCV.c_str();
				int qstare1 = mysql_query(conectare, q3);
				if (!qstare1)
				{
					rezultat1 = mysql_store_result(conectare);
					rand1 = mysql_fetch_row(rezultat1);
					while (rand1)
					{
						cout << "\n";
						cout << "\n";
						cout << "idCV:" << rand1[0] << " \n";
						cout << "nume: " << rand1[1] << " \n";
						cout << "prenume:" << rand1[2] << "\n";
						cout << "studii superioare:" << rand1[3] << "\n";
						cout << "liceu :" << rand1[4] << "\n";
						cout << "domenii in care activat:" << rand1[5] << " \n";
						cout << "experienta" << rand1[6] << "\n";
						cout << "permis" << rand1[7] << "\n";
						cout << "tel:" << rand1[8] << "\n";
						cout << "alte informatii:" << rand1[9] << "\n";
						cout << "\n";
						rand1 = mysql_fetch_row(rezultat1);
					}
				}
			}
			rand = mysql_fetch_row(rezultat);
			cout << "\n";
		}
	}
}




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
	bool isEMAIL = isEmail(email);
	if (isEMAIL == false)
	{
		string query_inregistAngajat = " insert into proiectpoo.angajat(email,parola,nume,prenume) values('" + email + "','" + parola + "','" + nume + "','" + prenume + "');";
		const char* q6 = query_inregistAngajat.c_str();
		int qstare = mysql_query(conectare, q6);
		rezultat = mysql_store_result(conectare);

		string querry_returnID = "select id from  proiectpoo.angajat where email = '" + email + "'";
		const char* q7 = querry_returnID.c_str();
		int qstare1 = mysql_query(conectare, q7);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string spatiu = " ";
		string insertId = rand[0];
		string querry_insertID = "insert into proiectpoo.cv(idCV,Nume,Prenume ,NumarTel,Email,Adresa,Judet,Oras,DataNastere,Studii,Locul,Institutie,PerioadaDeLaStudii,PerioadaPanaLaStudii,FunctiaOcupata,Domeniu,Angajator,PerioadaDeLa,PerioadaPanaLa ) values('" + insertId + "','"+ spatiu +"','"+spatiu+"','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "','" + spatiu + "')";
		const char* q8 = querry_insertID.c_str();
		int qstare2 = mysql_query(conectare, q8);
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

bool SQLManager::addjob(string Domeniu, string Functie, string Angajator, string Judet, string Oras, string ProgramDeLucru)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();

	string query_addjob = "insert into proiectpoo.job(Domeniu,Functie,Angajator,Judet,Oras,ProgramDeLucru) values('" + Domeniu + "', '" + Functie + "', '" + Angajator + "', '" + Judet + "', '" + Oras + "', '" + ProgramDeLucru + "')";
	
	const char* q = query_addjob.c_str();
	
	int qstare = mysql_query(conectare, q);
	
	rezultat = mysql_store_result(conectare);
	if (!qstare)
		return true;
	return false;
	

}

bool SQLManager::addRecenzie(string Nota, string Recenzie,string idAngajator)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();

	string query_addrecenzie = " insert into proiectpoo.recenzie( Nota ,Recenzie,Angajator) values ('" + Nota + "','"+ Recenzie +"','"+idAngajator + "')";
	
	const char* q = query_addrecenzie.c_str();
	
	int qstare = mysql_query(conectare, q);
	
	rezultat = mysql_store_result(conectare);
	if (!qstare)
		return true;
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

bool SQLManager::sendIdCv(string idA, string idCv)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	string sendId = " insert into proiectpoo.idangajatcv (idAnagajator,idCv) values( '" + idA + "','" + idCv + "')";
     const char* q = sendId.c_str();
	int qstare = mysql_query(conectare, q);
	rezultat = mysql_store_result(conectare);
	return true;
}

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
			if (!functie) return 1;
		}
		
	}
	else if (vec[0] == "2")
	{
		
		functie = this->autentificareUser(vec[1], vec[2]);
			if (functie)
			return 2;
	}
	else if (vec[0] == "3")
	{
		return 3;
	}
	else if (vec[0] == "5")
	{
		functie = isEmail(vec[1]);
		if (functie)
			return 4;
		
		
	}
	else if (vec[0] == "6")
	{
		return 6;
	}
	else if (vec[0] == "7")
	{
	
		return 7;
	}
	else if (vec[0] == "8") //addjob
	{
		return 8;

	}
	else if (vec[0] == "9")
	{
		return 9;

	}
	else if (vec[0] == "10")
	{
		return 10;
	}
	else if (vec[0] == "11")
	{
		return 11;
	}
	else if (vec[0] == "12")
	{
		return 12;
	}
	else if ( vec[0] == "13")
	{
		return 13;
	}
}

bool SQLManager::inregistrareCv( string Nume, string Prenume, string NumarTel, string Email, string Adresa, string Judet, string Oras, string DataNastere, string Studii, string Locul, string Institutie, string PerioadaDeLaStudii, string PerioadaPanaLaStudii, string FunctiaOcupata, string Domeniu, string Angajator, string PerioadaDeLa, string PerioadaPanaLa, string id)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();

	string query_trimitereCv = " update proiectpoo.cv set Nume='" + Nume + "',Prenume='" + Prenume + "' ,NumarTel= '" + NumarTel + "',Email='" + Email + "',Adresa='" + Adresa + "',Judet='" + Judet + "',Oras='" + Oras + "',DataNastere='" + DataNastere + "',Studii='" + Studii + "',Locul='" + Locul + "',Institutie='" + Institutie + "',PerioadaDeLaStudii='" + PerioadaDeLaStudii + "',PerioadaPanaLaStudii='" + PerioadaPanaLaStudii + "',FunctiaOcupata='" + FunctiaOcupata + "',Domeniu='" + Domeniu + "',Angajator='" + Angajator + "',PerioadaDeLa='" + PerioadaDeLa + "',PerioadaPanaLa='" + PerioadaPanaLa + "' where idCV=" + id + "";
	const char* q = query_trimitereCv.c_str();
	int qstare = mysql_query(conectare, q);
	rezultat = mysql_store_result(conectare);
	if (!qstare)
		return true;
	else return false;
}

vector<string> SQLManager::dateuser(string email, string pass,string rol)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	vector<string>date;
	if (rol == "1")
	{
		string query_verifAplicant = "select Nume,Prenume ,idAdmin from proiectpoo.admin where email = '" + email + "'";
		const char* q7 = query_verifAplicant.c_str();
		int qstare = mysql_query(conectare, q7);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		date.push_back(rand[0]);
		date.push_back(rand[1]);
		date.push_back(rand[2]);
	}
	else if (rol == "3")
	{
		string query_verifAplicant = "select nume,prenume,id from proiectpoo.angajat where email = '" + email + "'";
		const char* q7 = query_verifAplicant.c_str();
		int qstare = mysql_query(conectare, q7);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		date.push_back(rand[0]);
		date.push_back(rand[1]);
		date.push_back(rand[2]);
	}
	else if (rol == "2")
	{
		string query_verifAngajator = "select numeCompanie ,id from proiectpoo.angajator where email = '" + email + "'";
		const char* q7 = query_verifAngajator.c_str();
		int qstare = mysql_query(conectare, q7);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		date.push_back(rand[0]);
		date.push_back(rand[1]);


	}

	return date;
}

vector<string> SQLManager::SendCV(string id)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	int ID = stoi(id);
	string query_sendCv = "select Nume,Prenume ,NumarTel,Email,Adresa,Judet,Oras,DataNastere,Studii,Locul,Institutie,PerioadaDeLaStudii,PerioadaPanaLaStudii,FunctiaOcupata,Domeniu,Angajator,PerioadaDeLa,PerioadaPanaLa  from proiectpoo.cv where idCv = " + id + "";
	const char* q1 = query_sendCv.c_str();
	int qstare = mysql_query(conectare, q1);
	rezultat = mysql_store_result(conectare);
	rand = mysql_fetch_row(rezultat);
	vector<string>v;
	for (int i = 0; i <18;i++)
		v.push_back(rand[i]);

	return v;
}

vector<string> SQLManager::sendDate(string data)
{
	vector<string>v, v1;

	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	string aux;
	if (data == "domenii")
		aux = "Domeniu";
	else if (data == "functii")
		aux = "Functie";
	else if (data == "judete")
		aux = "Judet";
	else if (data == "orase")
		aux = "Oras";
	else if (data == "angajatori")
		aux = "Angajator";
	else if (aux == "programe_lucru")
		aux = "ProgramDeLucru";

	if (data == "domenii")
	{
		string query_sendData = " select count(*)  from proiectpoo.job";
		const char* q = query_sendData.c_str();
		int qstare = mysql_query(conectare, q);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string count = rand[0]; //sa stiu cate inregistrari am
		int j = stoi(count);
		string k = "1";

		for (int p = 0; p < j; p++) {
			int l = stoi(k);

			string query_Domeniu = " select  Domeniu  from proiectpoo.job where idjob= '" + k + "'";
			const char* q1 = query_Domeniu.c_str();
			int qstare1 = mysql_query(conectare, q1);
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			v.push_back(rand[0]);
			l++;
			k = to_string(l);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int ok = 0;
			for (int j = i; j < v.size(); j++)
				if (v[i] == v[j])
					ok++;
			if (ok == 1)
				v1.push_back(v[i]);

		}

	}
	if (data == "functii")
	{
		string query_sendData = " select count(*)  from proiectpoo.job";
		const char* q = query_sendData.c_str();
		int qstare = mysql_query(conectare, q);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string count = rand[0]; //sa stiu cate inregistrari am
		int j = stoi(count);
		string k = "1";

		for (int p = 0; p < j; p++) {
			int l = stoi(k);

			string query_Domeniu = " select  Functie  from proiectpoo.job where idjob= '" + k + "'";
			const char* q1 = query_Domeniu.c_str();
			int qstare1 = mysql_query(conectare, q1);
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			v.push_back(rand[0]);
			l++;
			k = to_string(l);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int ok = 0;
			for (int j = i; j < v.size(); j++)
				if (v[i] == v[j])
					ok++;
			if (ok == 1)
				v1.push_back(v[i]);

		}

	}
	if (data == "judete")
	{
		string query_sendData = " select count(*)  from proiectpoo.job";
		const char* q = query_sendData.c_str();
		int qstare = mysql_query(conectare, q);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string count = rand[0]; //sa stiu cate inregistrari am
		int j = stoi(count);
		string k = "1";

		for (int p = 0; p < j; p++) {
			int l = stoi(k);

			string query_Domeniu = " select  Judet  from proiectpoo.job where idjob= '" + k + "'";
			const char* q1 = query_Domeniu.c_str();
			int qstare1 = mysql_query(conectare, q1);
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			v.push_back(rand[0]);
			l++;
			k = to_string(l);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int ok = 0;
			for (int j = i; j < v.size(); j++)
				if (v[i] == v[j])
					ok++;
			if (ok == 1)
				v1.push_back(v[i]);

		}

	}
	if (data == "orase")
	{
		string query_sendData = " select count(*)  from proiectpoo.job";
		const char* q = query_sendData.c_str();
		int qstare = mysql_query(conectare, q);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string count = rand[0]; //sa stiu cate inregistrari am
		int j = stoi(count);
		string k = "1";

		for (int p = 0; p < j; p++) {
			int l = stoi(k);

			string query_Domeniu = " select  Oras  from proiectpoo.job where idjob= '" + k + "'";
			const char* q1 = query_Domeniu.c_str();
			int qstare1 = mysql_query(conectare, q1);
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			v.push_back(rand[0]);
			l++;
			k = to_string(l);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int ok = 0;
			for (int j = i; j < v.size(); j++)
				if (v[i] == v[j])
					ok++;
			if (ok == 1)
				v1.push_back(v[i]);

		}

	}
	if (data == "angajatori")
	{
		string query_sendData = " select count(*)  from proiectpoo.job";
		const char* q = query_sendData.c_str();
		int qstare = mysql_query(conectare, q);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string count = rand[0]; //sa stiu cate inregistrari am
		int j = stoi(count);
		string k = "1";

		for (int p = 0; p < j; p++) {
			int l = stoi(k);

			string query_Domeniu = " select  Angajator  from proiectpoo.job where idjob= '" + k + "'";
			const char* q1 = query_Domeniu.c_str();
			int qstare1 = mysql_query(conectare, q1);
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			v.push_back(rand[0]);
			l++;
			k = to_string(l);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int ok = 0;
			for (int j = i; j < v.size(); j++)
				if (v[i] == v[j])
					ok++;
			if (ok == 1)
				v1.push_back(v[i]);

		}

	}
	if (data == "programe_lucru")
	{
		string query_sendData = " select count(*)  from proiectpoo.job";
		const char* q = query_sendData.c_str();
		int qstare = mysql_query(conectare, q);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		string count = rand[0]; //sa stiu cate inregistrari am
		int j = stoi(count);
		string k = "1";

		for (int p = 0; p < j; p++) {
			int l = stoi(k);

			string query_Domeniu = " select  ProgramDeLucru  from proiectpoo.job where idjob= '" + k + "'";
			const char* q1 = query_Domeniu.c_str();
			int qstare1 = mysql_query(conectare, q1);
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			v.push_back(rand[0]);
			l++;
			k = to_string(l);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int ok = 0;
			for (int j = i; j < v.size(); j++)
				if (v[i] == v[j])
					ok++;
			if (ok == 1)
				v1.push_back(v[i]);

		}

	}

	return v1;
}

vector<string> SQLManager::filtrare(string Domeniu,  string judet, string Oras)
{
	vector<string>v;
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	string querry_nr = "select count(*)  from proiectpoo.job  where Domeniu = 'IT' and Judet = 'Vrancea' and Oras = 'Focsani'";
	const char* q1 = querry_nr.c_str();
	int qstare1 = mysql_query(conectare, q1);
	rezultat = mysql_store_result(conectare);
	rand = mysql_fetch_row(rezultat);
	string nr = rand[0];
	string concatenare;

	int l = stoi(nr);
	for (int m = 0; m < l; m++) {
		string querry_filtrare = "select  Domeniu ,  Functie,  Angajator,  Judet,  Oras,  ProgramDeLucru from proiectpoo.job where Domeniu = '" + Domeniu + "' or Judet ='" + judet + "' or Oras='" + Oras + "'";
		q1 = querry_filtrare.c_str();
		qstare1 = mysql_query(conectare, q1);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		for (int i = 0; i < 6; i++)
		{
			concatenare += rand[i] ;
			concatenare += " ";
		}
		v.push_back(concatenare);
	}

	return v;
}

string SQLManager::SendId(string nume)
{
	MYSQL_RES* rezultat;
	MYSQL_ROW rand;
	MYSQL* conectare = this->conectare();
	string query_sendid = "select id from proiectpoo.angajator where numeCompanie = '"+nume+"'";
	const char* q = query_sendid.c_str();
	int qstare = mysql_query(conectare, q);
	rezultat = mysql_store_result(conectare);
	rand= mysql_fetch_row(rezultat);
	cout << rand[0];
	string trimi = rand[0];
	return trimi;
}
