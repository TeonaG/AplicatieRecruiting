#undef UNICODE
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include <iostream>
#include <thread>
#include<mysql.h>
#include "Server.h"

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")

//Port to connect to from client
//Needs port forwarding from router
#define DEFAULT_PORT 42069 
#define DEFAULT_BUFLEN 512
#define MAX_CLIENTS 100
using namespace std;
int qstare,qstare1;
int main(void)
{
	srand(time(NULL));
	Server server(DEFAULT_PORT);
	cout << "\nServer up and running.\n" << endl;

	MYSQL* conectare;
	MYSQL_RES* rezultat, * rezultat1;
	MYSQL_ROW rand;

	conectare = mysql_init(0);
	conectare = mysql_real_connect(conectare, "localhost", "root", "parola", "proiectpoo", 3306, NULL, 0);
	if (conectare)
	{
		cout << "***conectare cu succes la baza de date****\n";
		cout << "**afisare admini\n";
		string query_afisareAdmin = "select *from proiectpoo.admin;";
		const char* q = query_afisareAdmin.c_str();
		qstare = mysql_query(conectare, q);

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
		cout << "\nafiseaza angajatori\n";
		string query_afisareaAngajator = "select *from proiectpoo.angajator;";
		const char* q1 = query_afisareaAngajator.c_str();
		qstare = mysql_query(conectare, q1);

		if (!qstare)
		{
			rezultat = mysql_store_result(conectare);
			rand = mysql_fetch_row(rezultat);
			while (rand)
			{
				cout << "\n";
				cout << "id:" << rand[0] << " \n";
				cout << "numeCompanie " << rand[1] << " \n";
				cout << "Parola:" << rand[2] << "\n";
				cout << "email:" << rand[3] << "\n";
				rand = mysql_fetch_row(rezultat);
			}
		}
		cout << "\nafiseaza angajator si cv daca are\n";
		string query_afisareaAplicat = " select* from proiectpoo.angajat ;";
		const char* q2 = query_afisareaAplicat.c_str();
		qstare = mysql_query(conectare, q2);

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
					qstare1 = mysql_query(conectare, q3);
					if (!qstare1)
					{
						rezultat1 = mysql_store_result(conectare);
						rand = mysql_fetch_row(rezultat1);
						while (rand)
						{
							cout << "\n";
							cout << "\n";
							cout << "idCV:" << rand[0] << " \n";
							cout << "nume: " << rand[1] << " \n";
							cout << "prenume:" << rand[2] << "\n";
							cout << "studii superioare:" << rand[3] << "\n";
							cout << "liceu :" << rand[4] << "\n";
							cout << "domenii in care activat:" << rand[5] << " \n";
							cout << "experienta" << rand[6] << "\n";
							cout << "permis" << rand[7] << "\n";
							cout << "tel:" << rand[8] << "\n";
							cout << "alte informatii:" << rand[9] << "\n";
							cout << "\n";
							rand = mysql_fetch_row(rezultat1);
						}
					}
				}
				rand = mysql_fetch_row(rezultat);
				cout << "\n";
			}
		}
		cout << "\nafiseaza job\n";
		string query_afisareaJob = " select* from proiectpoo.job ;";
		const char* q5 = query_afisareaJob.c_str();
		qstare = mysql_query(conectare, q5);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		while (rand)
		{
			cout << "\n";
			cout << "id:" << rand[0] << " \n";
			cout << "numeJob  :" << rand[1] << " \n";
			cout << "locatie : " << rand[2] << "\n";
			cout << "descriere :" << rand[3] << "\n";
			rand = mysql_fetch_row(rezultat);
		}

	}
	cout << "Verificare Aplicant :";
	{
		string email,pass;
		cout << "email:"; cin >> email;
		cout << "\n";
		cout << "pass:"; cin >> pass;

		string query_verifAplicant = " select count(*)  from proiectpoo.angajat where email = '"+email+"' and parola='"+pass+"'";
		const char* q6 = query_verifAplicant.c_str();
		qstare = mysql_query(conectare, q6);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		while (rand)
		{
			
			if (strcmp(rand[0], "1")==0)
				cout << "Este in baza de date";
			else 
				cout << "Nu este in baza de date";
			rand = mysql_fetch_row(rezultat);
		}

	}
     cout << "Verificare Angajator :";
	{
		string email, pass;
		cout << "email:"; cin >> email;
		cout << "\n";
		cout << "pass:"; cin >> pass;

		string query_verifAplicant = " select count(*)  from proiectpoo.angajator where email = '" + email + "' and parola='" + pass + "'";
		const char* q6 = query_verifAplicant.c_str();
		qstare = mysql_query(conectare, q6);
		rezultat = mysql_store_result(conectare);
		rand = mysql_fetch_row(rezultat);
		while (rand)
		{

			if (strcmp(rand[0], "1") == 0)
				cout << "Este in baza de date";
			else
				cout << "Nu este in baza de date";
			rand = mysql_fetch_row(rezultat);
		}

	}

}