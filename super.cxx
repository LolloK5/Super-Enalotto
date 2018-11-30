#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	int combinazioni;
	int num;
	int min;
	int temp;
	char g;
	int random[6];
	int giocata[12];
	int comb[12][924];
	int jolly;
	int superstar1;
	int vinto;
	int soldi;
	bool ripetizione;
	bool controllo1;
	bool controllo2 = false;
	bool controllo3 = true;
	bool superstar;
	bool superstar3;
	double importo;
	string modifica;

	do
	{
		do

		{
			cout << "Quanti numeri si vogliono giocare? Inserire un numero compreso tra 6 e 12.\n"
				 << endl;
			cin >> num;
			if (num < 6 || num > 12)
				cout << "\nErrore!" << endl;
		} while (num < 6 || num > 12);

		do
		{
			cout << "Si vuole giocare la superstar?\n\nClicca sul numero 1 se si vuole giocare, 2 se non si vuole." << endl;

			cin >> jolly;
			if (jolly != 1 && jolly != 2)
				cout << "Errore" << endl;

		} while (jolly != 1 && jolly != 2);

		switch (jolly)
		{
		case 1:
		{
			cout << "\nSuperstar attivato." << endl;
			superstar = true;
			break;
		}

		case 2:
		{
			cout << "\nSuperstar non attivato." << endl;
			superstar = false;
			break;
		}
		}

		cout << "\nRicordiamo che la giocata vincente avra' una combinazione di numeri\ncompresa tra l'1 e il 90. Non e' consentito inserire numeri uguali tra loro."
		        
			 << endl;
do{
		for (int h = 0; h < num; h++)
		{
			do
			{
				cout << "Inserire giocata numero " << h + 1 << endl;
				cin >> giocata[h];
				if (giocata[h] <= 0 || giocata[h] > 90)
					cout << "\nErrore!\nIl numero da inserire deve essere compreso tra 1 e 90" << endl;
			} while (giocata[h] <= 0 || giocata[h] > 90);
		}

			for (int i = 0; i < num-1; i++)
		{
			min = i;

			for (int j = i + 1; j < num; j++)
				if (giocata[j] < giocata[min])
					min = j;

			temp = giocata[min];
			giocata[min] = giocata[i];
			giocata[i] = temp;
		}
			
  ripetizione=false;
  
  for(int i=0;i<num;i++)
  {
  	for(int j=0;j<num;j++){
  		if(i!=j)
  	if (giocata[i]==giocata[j])ripetizione=true;
  		
  	}
  }
if(ripetizione){
  	cout<<"\nErrore sono stati inseriti dei numeri uguali.\nReinserirli nuovamente.\n"<<endl;
}
	}while(ripetizione);

			
			if (superstar)
			{
				cout << "Prego inserire la giocata Superstar." << endl;
				cin >> superstar1;
			}

			switch (num)
			{
			case 6:
			{
				importo = 1.00;
				combinazioni = 1;
				if (superstar)
					importo = 1.50;
				break;
			}
			case 7:
			{
				importo = 7.00;
				combinazioni = 7;
				if (superstar)
					importo = 10.50;
				break;
			}
			case 8:
			{
				importo = 28.00;
				combinazioni = 28;
				if (superstar)
					importo = 42.00;
				break;
			}
			case 9:
			{
				importo = 84.00;
				combinazioni = 84;
				if (superstar)
					importo = 126.00;
				break;
			}
			case 10:
			{
				importo = 210.00;
				combinazioni = 210;
				if (superstar)
					importo = 315.00;
				break;
			}
			case 11:
			{
				importo = 462.00;
				combinazioni = 462;
				if (superstar)
					importo = 693.00;
				break;
			}
			case 12:
			{
				importo = 924.00;
				combinazioni = 924;
				if (superstar)
					importo = 1386.00;
				break;
			}
			}
			cout << "\n\n";
			for (int k = 0; k <num; k++)
			{
				cout << giocata[k] << " ";
			}
			if (superstar)
				cout << " " << superstar1 << endl;

			do
			{
				cout << "\nL'importo giocato e' di " << importo << " Euro.\nVuole modificare la sua giocata?\nDigiti Si se vuole modificare No se non vuole." << endl;
				cin >> modifica;
				if (modifica == "Si")
				{
					controllo1 = false;
					cout << "\nSta per essere reindirizzato ad inizio programma..." << endl;
				}
				if (modifica == "No")
					controllo1 = true;
			} while (modifica != "Si" && modifica != "No");
		}
		while (!controllo1)
			;
		cout << "\n\nEcco l'elenco dei numeri usciti!\n\n";

		//Giocate casuali

		srand(time(NULL));

		for (int i = 0; i < 6; i++)
		{
			random[i] = (rand() % 90) + 1;
			for (int j = 0; j < i; j++)
			{
				if (random[i] == random[j])
				{
					i--;
					break;
				}
			}
		}

		//ordinamento random

		for (int i = 0; i < 5; i++)
		{
			min = i;

			for (int j = i + 1; j < 6; j++)
				if (random[j] < random[min])
					min = j;

			temp = random[min];
			random[min] = random[i];
			random[i] = temp;
		}
		for (int i = 0; i < 6; i++)
			cout << random[i] << " ";
		cout << endl;

		if (superstar)
		{
			cout << "\nEcco il numero superstar!\n"
				 << endl;

			//jolly casuale

			jolly = 0;
			// do{
			//	for(int y=0;y<6;y++)
			//       { controllo3=true;

			jolly = (rand() % 90) + 1;
			//if(jolly==random[y])controllo3=false;
			//}
			//  }while(!controllo3);
			cout << "\n"
				 << jolly << "\n"
				 << endl;
		}
		//NEW
		if(superstar1==jolly)superstar3=true;

		switch(vinto)
		{
			case 0 :
			{cout<<"I suoi numeri non sono vincenti"<<endl;
			if(superstar3 && superstar){cout<<"Superstar corretta!"<<endl;
			soldi=5;
			cout<<"Hai vinto "<<soldi<<" euro."<<endl;
			}
			if(!superstar3 && superstar) cout<<"Superstar non corretta"<<endl;
			                    
			break;
			}
			
			case 1 :
			{cout<<"Un numero vincente"<<endl;
			if(superstar3 && superstar){cout<<"Superstar corretta!"<<endl;
			soldi=10;
			cout<<"Hai vinto "<<soldi<<" euro."<<endl;
			}
			if(!superstar3 && superstar) cout<<"Superstar non corretta"<<endl;
			break;
			}
			case 2 :
			{cout<<"Due numeri vincenti"<<endl;
		if(superstar3 && superstar){cout<<"Superstar corretta!"<<endl;
			soldi=100;
			cout<<"Hai vinto "<<soldi<<" euro."<<endl;
			}
			if(!superstar3 && superstar) cout<<"Superstar non corretta"<<endl;
				break;
			}
			case 3 :
			{cout<<"Tre numeri vincenti"<<endl;
			break;
			}
			case 4 :
			{cout<<"Quattro numeri vincenti"<<endl;
			break;
			}
			case 5 :
			{cout<<"Cinque numeri vincenti"<<endl;
			break;
			}
			case 6 :
			{cout<<"Sei numeri vincenti"<<endl;
			break;
			}
		}
	}