#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int menu, menu1, menu2, menu3;
	int num, verifica; //verifica é la variabile per identificare un auto
	int contatore = 0;
	int contatore1 = 0;
	string prenotata;
	int registrazione, num_reg;
	int conferma;
	char nome_completo;
	bool verifica1;
	int giornoi, giornof, mesei, mesef, annoi, annof;
	int pren, ripetizione;
	int contatoremacchine =0;
	int contatoremacchinegenerale=0;
	int h;
	int c;
	struct car
	{
		char nome[50];
		char cliente_nome[50];
		char cliente_cognome[50];
		bool presa = false;
		int n_pren = 0;
		struct inizio
		{
			int giorno;
			int mese;
			int anno;
		} inizio [10];
		struct fine
		{
			int giorno;
			int mese;
			int anno;
		} fine [10];

	} cars[20];

	struct prenotazione
	{
	    char nome_macchina [50];
	    char cliente_nome[50];
		char cliente_cognome[50];
	    struct inizio
		{
			int giorno;
			int mese;
			int anno;
		} inizio [10];
		struct fine
		{
			int giorno;
			int mese;
			int anno;
		} fine [10];

	}prenotazione[100];

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
	    do
        {
            cout << "Menu' principale\n\n1. Gestione Macchine\n2. Gestione Clienti\n3. Gestione Prenotazioni\n4. Esci" << endl;
		cin >> menu;
		if(menu<1 || menu>4)cout<<"\nDeve inserire un numero compreso tra 1 e 6\n"<<endl;
        }while(menu<1 || menu>4);


		switch (menu)
		{
		case 1:
		{
		    cout<<"\nGestione Macchine\n\n1. Aggiungi macchina\n2. Visualizza lista\n3. Torna menu' principale"<<endl;
		    cin>>menu1;
		    switch(menu1)
		    {

            case 1:
                {
                    cout << "Quante macchine aggiungere?" << endl;
			cin >> num;
			for (int a = 0; a < num; a++)
			{
				cout << "Inserisci nome macchina" << endl;
				cin >> cars[contatore].nome;
				contatore++;
				contatoremacchinegenerale++;

			}
			break;
                }

            case 2 :
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
				for(int pren =0; pren < cars[verifica].n_pren; pren++ ){
				cout << "Cliente che ha prenotato la macchina: " << cars[a].cliente_nome << " " << cars[a].cliente_cognome << endl
					 << "Prenotata da " << cars[verifica].inizio[pren].giorno << "/" << cars[verifica].inizio[pren].mese << "/" << cars[verifica].inizio[pren].anno << " a " << cars[verifica].fine[pren].giorno << "/" << cars[verifica].fine[pren].mese << "/" << cars[verifica].fine[pren].anno << endl
					 << endl;
				}
			}
			if (cars[a].presa == false)
			{
				prenotata = "Libera";
				cout << prenotata << endl << endl;
			}
            }
                break;
                }
            case 3:
                {
                    break;
                }


		    }
            break;
		}


		case 2:
		{
                cout<<"\nGestione clienti\n\n1. Aggiungi cliente\n2. Visualizza lista\n3. Torna al menu' principale\n"<<endl;
	cin>>menu2;
		    switch(menu2)
		    {


            case 1:
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
            case 2:
                {
                	cout<<"\nElenco clienti:\n"<<endl;
	for (int a = 0; a < contatore1; a++)
				{
					cout << "Numero cliente: " << a << endl
						 << "Nome: " << clients[a].nome << "\nCognome: " << clients[a].cognome << "\n"
						 << "Anno di nascita: " << clients[a].anno << endl
						 << endl;
				}

		break;
                }
            case 3:
                {
                    break;
                }

		    }

break;
		}
















	case 3:
	{
		cout<<"\nGestione prenotazione\n\n1. Aggiungi prenotazione\n2. Elimina prenotazione\n3. Modifica prenotazione\n4. Visualizza lista prenotazioni\n5. Torna al menu' principale"<<endl;


			cin>>menu3;
	        switch(menu3)
	        {
	        	case 1:
    {
        if(contatoremacchinegenerale==0)
        {
            cout<<"\n\nNon e' possibile effettuare una prenotazione\npoiche' non ci sono macchine registrate\n"<<endl;
            break;
        }
        do{
	        		cout<<"\nAggiungi prenotazione:\n"<<endl;

	        		do
                    {
                    cout<<"Inserire giorno inizio prenotazione...\n"<<endl;
                    cin>>giornoi;
                    if(giornoi<=0 || giornoi>31)cout<<"Il giorno deve essere compreso tra 1 e 31"<<endl;
                    }while(giornoi<=0 || giornoi>31);
                    do
                    {
                    cout<<"Inserire mese inizio prenotazione...\n"<<endl;
                    cin>>mesei;
                    if(mesei<=0 || mesei>12)cout<<"Il mese deve essere compreso tra 1 e 12"<<endl;
                    }while(mesei<=0 || mesei>12);
                    do
                    {
                    cout<<"Inserire anno inizio prenotazione...\n"<<endl;
                    cin>>annoi;
                    if(annoi<2019)cout<<"L'anno non puo' essere minore di 2019"<<endl;
                    }while(annoi<2019);

	        		do
                    {
                    cout<<"Inserire giorno fine prenotazione...\n"<<endl;
                    cin>>giornof;
                    if(giornof<=0 || giornof>31)cout<<"Il giorno deve essere compreso tra 1 e 31"<<endl;
                    }while(giornof<=0 || giornof>31);
                    do
                    {
                    cout<<"Inserire mese fine prenotazione...\n"<<endl;
                    cin>>mesef;
                    if(mesef<=0 || mesef>12)cout<<"Il mese deve essere compreso tra 1 e 12"<<endl;

                    }while(mesef<=0 || mesef>12  );
                    do
                    {
                    cout<<"Inserire anno fine prenotazione...\n"<<endl;
                    cin>>annof;
                    if(annof<2019)cout<<"L'anno non puo' essere minore di 2019"<<endl;
                    if(annof<annoi){cout<<"L'anno di fine prenotazione non puo' essere minore di quello di inizio"<<endl;
                    cout<<"Inserisci di nuovo anno fine prenotazione"<<endl;
                    cin>>annof;}
                    }while(annof<2019 || annoi>annof);

                    do
                    {
                         if(annoi==annof && mesef<mesei){cout<<"Il mese di fine prenotazione non puo' essere minore di quello di inizio"<<endl;

                         do
                         {
                             cout<<"Inserisci nuovamente data fine prenotazione"<<endl;
                            cin>>giornof>>mesef>>annof;
                         }while(mesef<=0 || mesef>31  || giornof<=0 || giornof>31 || annof<2019);
                         }
                    }while(annoi==annof && mesef<mesei);

                   do
                    {
                         if(annoi==annof && mesef==mesei && giornof<giornoi){cout<<"Il giorno di fine prenotazione non puo' essere minore di quello di inizio"<<endl;
                         do
                         {
                             cout<<"Inserisci nuovamente data fine prenotazione"<<endl;
                            cin>>giornof>>mesef>>annof;
                         }while(mesef<=0 || mesef>31  || giornof<=0 || giornof>31 || annof<2019);}
                    }while(annoi==annof && mesef==mesei && giornof<giornoi);


	        		verifica1=false;
            for(int a=0; a < contatore; a++)
                    {
                        for(pren =0; pren < cars[a].n_pren ; pren++)
                        {
                                  		if(annoi>cars[a].fine[pren].anno || annof<cars[a].inizio[pren].anno || annof == cars[a].inizio[pren].anno && mesef<cars[a].inizio[pren].mese ||annoi == cars[a].fine[pren].anno &&
                              mesei>cars[a].fine[pren].mese || annof==cars[a].inizio[pren].anno && mesef == cars[a].inizio[pren].mese
               && giornof < cars[a].inizio[pren].giorno|| annoi == cars[a].fine[pren].anno && mesei == cars[a].fine[pren].mese && giornoi>cars[a].fine[pren].giorno)
            verifica1 = true;

  }
	        		if(cars[a].presa==false || cars[a].presa==true && verifica1== true)
                    {cout<<"Data inizio: "<<giornoi<<"/"<<mesei<<"/"<<annoi<<endl<<"Data fine: "<<giornof<<"/"<<mesef<<"/"<<annof<<endl;

	        		cout << "\nEcco l'elenco delle auto presenti nel sistema che non sono prenotate.\n" 	 << endl;
                        cout << "Numero macchina " << a << endl;
                        cout << cars[a].nome<< endl<<endl;
                        contatoremacchine++;
                    }

                    }
                    if(contatoremacchine==0)
                    {
                        cout<<"Ci dispiace, ma in questo periodo nessun' auto e' disponibile.\nDigiti 1 per selezionare un altro periodo o 2 per tornare al menu' principale"<<endl;
                        do
                        {
                            cin>>ripetizione;
                            if(ripetizione!=1 && ripetizione!=2)cout<<"Deve inserire il numero 1 o 2.\nDigiti 1 per selezionare un altro periodo o 2 per tornare al menu' principale"<<endl;
                        }while(ripetizione<1 || ripetizione>2);
                        if(ripetizione ==2)
                            break;
                    }
    }while(ripetizione==1);
                    cout << "Inserisca il numero dell'auto che vuole noleggiare" << endl;
		cin >> verifica;

		cout << cars[verifica].nome << endl;

		cout << "Vuole noleggiare quest'auto? \nDigitare 1 se vuole proseguie, 2 se vuole tornare al menu' princiale." << endl;
		cin >> conferma;

		if (conferma == 1)
		{
		    cars[verifica].presa = true;
		    pren=cars[verifica].n_pren;

			cars[verifica].inizio[pren].giorno = giornoi;
			cars[verifica].inizio[pren].mese = mesei;
			cars[verifica].inizio[pren].anno = annoi;

			cars[verifica].fine[pren].giorno = giornof;
			cars[verifica].fine[pren].mese = mesef;
			cars[verifica].fine[pren].anno = annof;



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

				for (int a = 0; a < 50; a++)
				{
					cars[verifica].cliente_nome[a] = clients[num_reg].nome[a];
					cars[verifica].cliente_cognome[a] = clients[num_reg].cognome[a];
				}
			}

			if (registrazione == 2)

			{
				clients[contatore1].prenotazione = true;

				cout << "Inserisca il nome" << endl;
				cin >> clients[contatore1].nome;

				cout << "Inserisca il conome" << endl;
				cin >> clients[contatore1].cognome;
				cout << "Inserisca l'anno di nascita" << endl;
				cin >> clients[contatore1].anno;

				for (int a = 0; a < 50; a++)
				{
					cars[verifica].cliente_nome[a] = clients[contatore1].nome[a];

					cars[verifica].cliente_cognome[a] = clients[contatore1].cognome[a];
				}
				contatore1++;
			}
			cars[verifica].n_pren ++;
        }
        break;
    }
                case 2:

            {
                cout<<"\nModifica prenotazione\n\nSelezioni il numero corrispondente alla prenotazione che si vuole modificare.\n"<<endl;

                for (int a = 1; a <= contatore; a++)
			{


				cout <<a<<") "<< cars[a].nome
					 << endl;
			if (cars[a].presa == true)
			{
				prenotata = "Prenotata";
				cout << prenotata << endl;
				for(int pren =0; pren < cars[verifica].n_pren; pren++ ){
				cout << "Cliente che ha prenotato la macchina: " << cars[a].cliente_nome << " " << cars[a].cliente_cognome << endl
					 << "Prenotata da " << cars[verifica].inizio[pren].giorno << "/" << cars[verifica].inizio[pren].mese << "/" << cars[verifica].inizio[pren].anno << " a " << cars[verifica].fine[pren].giorno << "/" << cars[verifica].fine[pren].mese << "/" << cars[verifica].fine[pren].anno << endl
					 << endl;
				}
			}
			if (cars[a].presa == false)
			{
				prenotata = "Libera";
				cout << prenotata << endl << endl;
			}
            }
            cout<<"Inserisca il numero corrispondete alla macchina"<<endl;
            int b;
            cin>>b;
            if(cars[b].n_pren>0)
            {

                cout<<"Selezioni la sua prenotazione"<<endl;

                cin>>c;
                cout<<"Ora potra' modificare la sua prenotazione"<<endl;
                do
                    {
                    cout<<"Inserire giorno inizio prenotazione...\n"<<endl;
                    cin>>giornoi;
                    if(giornoi<=0 || giornoi>31)cout<<"Il giorno deve essere compreso tra 1 e 31"<<endl;
                    }while(giornoi<=0 || giornoi>31);
                    do
                    {
                    cout<<"Inserire mese inizio prenotazione...\n"<<endl;
                    cin>>mesei;
                    if(mesei<=0 || mesei>12)cout<<"Il mese deve essere compreso tra 1 e 12"<<endl;
                    }while(mesei<=0 || mesei>12);
                    do
                    {
                    cout<<"Inserire anno inizio prenotazione...\n"<<endl;
                    cin>>annoi;
                    if(annoi<2019)cout<<"L'anno non puo' essere minore di 2019"<<endl;
                    }while(annoi<2019);

	        		do
                    {
                    cout<<"Inserire giorno fine prenotazione...\n"<<endl;
                    cin>>giornof;
                    if(giornof<=0 || giornof>31)cout<<"Il giorno deve essere compreso tra 1 e 31"<<endl;
                    }while(giornof<=0 || giornof>31);
                    do
                    {
                    cout<<"Inserire mese fine prenotazione...\n"<<endl;
                    cin>>mesef;
                    if(mesef<=0 || mesef>12)cout<<"Il mese deve essere compreso tra 1 e 12"<<endl;

                    }while(mesef<=0 || mesef>12  );
                    do
                    {
                    cout<<"Inserire anno fine prenotazione...\n"<<endl;
                    cin>>annof;
                    if(annof<2019)cout<<"L'anno non puo' essere minore di 2019"<<endl;
                    if(annof<annoi){cout<<"L'anno di fine prenotazione non puo' essere minore di quello di inizio"<<endl;
                    cout<<"Inserisci di nuovo anno fine prenotazione"<<endl;
                    cin>>annof;}
                    }while(annof<2019 || annoi>annof);

                    do
                    {
                         if(annoi==annof && mesef<mesei){cout<<"Il mese di fine prenotazione non puo' essere minore di quello di inizio"<<endl;

                         do
                         {
                             cout<<"Inserisci nuovamente data fine prenotazione"<<endl;
                            cin>>giornof>>mesef>>annof;
                         }while(mesef<=0 || mesef>31  || giornof<=0 || giornof>31 || annof<2019);
                         }

                    }while(annoi==annof && mesef<mesei);

                   do
                    {
                         if(annoi==annof && mesef==mesei && giornof<giornoi){cout<<"Il giorno di fine prenotazione non puo' essere minore di quello di inizio"<<endl;
                         do
                         {
                             cout<<"Inserisci nuovamente data fine prenotazione"<<endl;
                            cin>>giornof>>mesef>>annof;
                         }while(mesef<=0 || mesef>31  || giornof<=0 || giornof>31 || annof<2019);}
                    }while(annoi==annof && mesef==mesei && giornof<giornoi);
                    }while(annoi==annof && mesef==mesei && giornof<giornoi);


	        		verifica1=false;
                                  		if(annoi>cars[b].fine[c].anno || annof<cars[b].inizio[c].anno || annof == cars[b].inizio[c].anno && mesef<cars[b].inizio[c].mese ||annoi == cars[b].fine[c].anno &&
                              mesei>cars[b].fine[c].mese || annof==cars[b].inizio[c].anno && mesef == cars[b].inizio[c].mese
               && giornof < cars[b].inizio[c].giorno|| annoi == cars[b].fine[c].anno && mesei == cars[b].fine[c].mese && giornoi>cars[b].fine[c].giorno)
            verifica1 = true;


	        		if(verifica1== true)
                    {

		    pren=cars[b].n_pren;

			cars[b].inizio[c].giorno = giornoi;
			cars[b].inizio[c].mese = mesei;
			cars[b].inizio[c].anno = annoi;

			cars[b].fine[c].giorno = giornof;
			cars[b].fine[c].mese = mesef;
			cars[b].fine[c].anno = annof;
                    }




            if(cars[b].n_pren==0)
            {


                cout<<"Ora potra' modificare la sua prenotazione"<<endl;
                do
                    {
                    cout<<"Inserire giorno inizio prenotazione...\n"<<endl;
                    cin>>giornoi;
                    if(giornoi<=0 || giornoi>31)cout<<"Il giorno deve essere compreso tra 1 e 31"<<endl;
                    }while(giornoi<=0 || giornoi>31);
                    do
                    {
                    cout<<"Inserire mese inizio prenotazione...\n"<<endl;
                    cin>>mesei;
                    if(mesei<=0 || mesei>12)cout<<"Il mese deve essere compreso tra 1 e 12"<<endl;
                    }while(mesei<=0 || mesei>12);
                    do
                    {
                    cout<<"Inserire anno inizio prenotazione...\n"<<endl;
                    cin>>annoi;
                    if(annoi<2019)cout<<"L'anno non puo' essere minore di 2019"<<endl;
                    }while(annoi<2019);

	        		do
                    {
                    cout<<"Inserire giorno fine prenotazione...\n"<<endl;
                    cin>>giornof;
                    if(giornof<=0 || giornof>31)cout<<"Il giorno deve essere compreso tra 1 e 31"<<endl;
                    }while(giornof<=0 || giornof>31);
                    do
                    {
                    cout<<"Inserire mese fine prenotazione...\n"<<endl;
                    cin>>mesef;
                    if(mesef<=0 || mesef>12)cout<<"Il mese deve essere compreso tra 1 e 12"<<endl;

                    }while(mesef<=0 || mesef>12  );
                    do
                    {
                    cout<<"Inserire anno fine prenotazione...\n"<<endl;
                    cin>>annof;
                    if(annof<2019)cout<<"L'anno non puo' essere minore di 2019"<<endl;
                    if(annof<annoi){cout<<"L'anno di fine prenotazione non puo' essere minore di quello di inizio"<<endl;
                    cout<<"Inserisci di nuovo anno fine prenotazione"<<endl;
                    cin>>annof;}
                    }while(annof<2019 || annoi>annof);

                    do
                    {
                         if(annoi==annof && mesef<mesei){cout<<"Il mese di fine prenotazione non puo' essere minore di quello di inizio"<<endl;

                         do
                         {
                             cout<<"Inserisci nuovamente data fine prenotazione"<<endl;
                            cin>>giornof>>mesef>>annof;
                         }while(mesef<=0 || mesef>31  || giornof<=0 || giornof>31 || annof<2019);
                         }
                    }while(annoi==annof && mesef<mesei);

                   do
                    {
                         if(annoi==annof && mesef==mesei && giornof<giornoi){cout<<"Il giorno di fine prenotazione non puo' essere minore di quello di inizio"<<endl;
                         do
                         {
                             cout<<"Inserisci nuovamente data fine prenotazione"<<endl;
                            cin>>giornof>>mesef>>annof;
                         }while(mesef<=0 || mesef>31  || giornof<=0 || giornof>31 || annof<2019);}
                    }while(annoi==annof && mesef==mesei && giornof<giornoi);


	        		verifica1=false;
                                  		if(annoi>cars[b].fine[0].anno || annof<cars[b].inizio[0].anno || annof == cars[b].inizio[0].anno && mesef<cars[b].inizio[0].mese ||annoi == cars[b].fine[0].anno &&
                              mesei>cars[b].fine[0].mese || annof==cars[b].inizio[0].anno && mesef == cars[b].inizio[0].mese
               && giornof < cars[b].inizio[0].giorno|| annoi == cars[b].fine[0].anno && mesei == cars[b].fine[0].mese && giornoi>cars[b].fine[0].giorno)
            verifica1 = true;


	        		if(verifica1== true)
                    {

		    pren=cars[b].n_pren;

			cars[b].inizio[0].giorno = giornoi;
			cars[b].inizio[0].mese = mesei;
			cars[b].inizio[0].anno = annoi;

			cars[b].fine[0].giorno = giornof;
			cars[b].fine[0].mese = mesef;
			cars[b].fine[0].anno = annof;
                    }
            }
    break;
 }
}
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
	case 4:
	    {
	        break;
	    }
}

	}while (menu != 4);


    system("PAUSE");
    return 0;

}
