#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int menu;
	int num, verifica; //verifica é la variabile per identificare un auto
	int contatore = 0;
	int contatore1 = 0;
	string prenotata;

	int registrazione, num_reg;
	int conferma;
	char nome_completo;
	bool macchina_cliente, cliente_macchina;

	struct car
	{
		char nome[50];
		char cliente_nome[50];
		char cliente_cognome[50];
		bool presa = false;

	} cars[20];

	struct cliente
	{
		char nome[50];
		char cognome[50];
		char macchina[50];
		int anno;
		bool prenotazione = false;
	} clients[100];

	do
	{
		cout << "1. Aggiungi macchina\n2. Visualizza lista macchine\n3. Aggiungi prenotazione\n4. Aggiungi cliente\n5. Lista clienti\n6. Esci" << endl;

		cin >> menu;

		switch (menu)
		{
		case 1:
		{
			cout << "Quante macchine aggiungere?" << endl;
			cin >> num;
			for (int a = 0; a < num; a++)
			{
				cout << "Inserisci la macchina" << endl;
				cin >> cars[contatore].nome;
				contatore++;
			}
			break;
		}

		case 2:
		{
			cout << "\nEcco l'elenco delle auto inserite.\n"
				 << endl;
			for (int a = 0; a < contatore; a++)
			{
				cout << "Numero macchina: " << a << endl;

				cout << cars[a].nome
					 << endl;
				if (cars[a].presa == true)
				{
					prenotata = "Prenotata";
					cout << prenotata << endl;
					cout << "Cliente che ha prenotato la macchina: " << cars[a].cliente_nome << " " << cars[a].cliente_cognome << endl
						 << endl;
				}
				if (cars[a].presa == false)
				{
					prenotata = "Libera";
					cout << prenotata <<endl<< endl;
				}
			}
			break;
		}

		case 3:
		{
			cout << "\nEcco l'elenco delle auto presenti nel sistema che non sono prenotate.\n"
				 << endl;

			for (int a = 0; a < contatore; a++)
			{
				if (cars[a].presa == false)
				{
					cout << "Numero macchina " << a << endl;

					cout << cars[a].nome
						 << endl;
					if (cars[a].presa == true)
						prenotata = "Prenotata";
					if (cars[a].presa == false)
						prenotata = "Libera";
					cout << prenotata <<endl<< endl;
				}
			}
			cout <<endl<< "Inserisca il numero dell'auto che vuole noleggiare" << endl;
			cin >> verifica;
			if (cars[verifica].presa == true)
				prenotata = "Prenotata";
			if (cars[verifica].presa == false)
				prenotata = "Libera";
			cout << cars[verifica].nome << endl;

			cout <<endl<< "Vuole noleggiare quest'auto? \nDigitare 1 se vuole proseguie, 2 se vuole tornare al menu' princiale." << endl;
			cin >> conferma;

			if (conferma == 1)
			{
				cars[verifica].presa = true;
				cout << "E' gia' registrato come nostro cliente?\nDigiti 1 se e' nostro cliente, 2 se non lo e',\nverra' reindirizzato nella pagina di registrazione\n"
					 << endl;

				cin >> registrazione;

				if (registrazione == 1)

				{
					for (int a = 0; a < contatore1; a++)
					{
						cout << "Numero cliente: " << a << endl
							 << "Nome: " << clients[a].nome << "\nCognome: " << clients[a].cognome << "\n"
							 << "Anno di nascita: " << clients[a].anno << endl
							 << endl;
					}
					cout << "Inserisca il numero corrispondente al suo nome: " << endl;

					cin >> num_reg;
					clients[num_reg].prenotazione = true;

					for (int a = 0; a < 50; a++)
					{
						cars[verifica].cliente_nome[a] = clients[num_reg].nome[a];
						clients[num_reg].macchina[a] = cars[verifica].nome[a];

						cars[verifica].cliente_cognome[a] = clients[num_reg].cognome[a];
					}
				}

				if (registrazione == 2)

				{
					clients[contatore1].prenotazione = true;

					cout << "Inserisca il nome" << endl;
					cin >> clients[contatore1].nome;

					cout << "Inserisca il cognome" << endl;
					cin >> clients[contatore1].cognome;
					cout << "Inserisca l'anno di nascita" << endl;
					cin >> clients[contatore1].anno;

					for (int a = 0; a < 50; a++)
					{
						cars[verifica].cliente_nome[a] = clients[contatore1].nome[a];

						cars[verifica].cliente_cognome[a] = clients[contatore1].cognome[a];
						clients[contatore1].macchina[a] = cars[verifica].nome[a];
					}

					contatore1++;
				}
			}
			break;
		}
		case 4:
		{
			cout << "Inserisca il nome" << endl;
			cin >> clients[contatore1].nome;

			cout << "Inserisca il cognome" << endl;
			cin >> clients[contatore1].cognome;
			cout << "Inserisca l'anno di nascita" << endl;
			cin >> clients[contatore1].anno;
			contatore1++;
			break;
		}
		case 5:
		{
			for (int a = 0; a < contatore1; a++)
			{
				cout << "Elenco clienti registrati: " << endl;
				cout << "Numero cliente: " << a << endl
					 << "Nome: " << clients[a].nome << "\nCognome: " << clients[a].cognome << "\n"
					 << "Anno di nascita: " << clients[a].anno << endl
					 << endl;

			}
			break;
		}
		case 6:
			break;
		}
	} while (menu != 6);
}

