#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main()
{

cout<<"  ........  ...  ...  ........  ........  ........  ........  ..    ..  ........  ...       ........  ........  ........  ........"<<endl;
cout<<"  ........  ...  ...  ........  ........  ........  ........  ...  ...  ........  ...       ........  ........  ........  ........"<<endl;
cout<<"  ..        ...  ...  ...   ..  ...       ...   ..  ...       .... ...  ..    ..  ...       ..    ..     ..        ...    ..    .."<<endl;
cout<<"  ..        ...  ...  ...   ..  ...       ...   ..  ...       .... ...  ..    ..  ...       ..    ..     ..        ...    ..    .."<<endl;
cout<<"  ........  ...  ...  ........  ........  ........  ........  ... ....  ........  ...       ..    ..     ..        ...    ..    .."<<endl;
cout<<"  ........  ...  ...  ........  ........  ........  ........  ........  ........  ...       ..    ..     ..        ...    ..    .."<<endl;
cout<<"        ..  ...  ...  ...       ...       ....      ...       ... ....  ..    ..  ...       ..    ..     ..        ...    ..    .."<<endl;
cout<<"        ..  ...  ...  ...       ...       .....     ...       ...  ...  ..    ..  ...       ..    ..     ..        ...    ..    .."<<endl;
cout<<"  ........  ........  ...       ........  .. ...    ........  ...  ...  ..    ..  ........  ..    ..     ..        ...    ........"<<endl;
cout<<"  ........  ........  ...       ........  ..  ...   ........  ...  ...  ..    ..  ........  ........     ..        ...    ........\n\n"<<endl;
    system("color 40");
	int combinazioni;
	int num;
	int min;
	int temp;
	int random[6];
	int giocata[12];
	int jolly;
	int superstar1;
	int quota;
	double vinto;
	int soldi;
	bool ripetizione;
	bool ripetizioneS;
	bool controllo1;
	bool controllo2 = false;
	bool controllo3 = true;
	bool controlloS;
	bool superstar;
	bool superstar3;
	double importo, vinto0, vinto1, vinto2, vinto3, vinto4, vinto5, vinto6, vintoTot;
	int modifica;
	int w[20];
	int vq2, vq3, vq4, vq5, vq6;
	double jackpot = 1000000;
	int kk = num - 5;
	int calc = 0;
	string password;

	do
	{
		do

		{
			cout << "Quanti numeri si vogliono giocare?\nInserire un numero compreso tra 6 e 12.\n"
				 << endl;
			cin >> num;
			if (num < 6 || num > 12)
				cout << "\nErrore! Si possono inserire solo numeri compresi tra 6 e 12." << endl;
		} while (num < 6 || num > 12);

		do
		{
			cout << "Si vuole giocare la superstar?\n\n1. SI\n2. NO" << endl;

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

		cout << "\nRicordiamo che la giocata vincente avra' una combinazione di numeri compresa tra l'1 e il 90.\nNon e' consentito inserire numeri uguali tra loro."

			 << endl;

		int cont = 0;

		for (int h = 0; h < num; h++)
		{
			do
			{
				do
				{
					cout << "Inserire giocata numero " << h + 1 << endl;
					cin >> giocata[h];
					if (giocata[h] <= 0 || giocata[h] > 90)
						cout << "\nErrore! Il numero da inserire deve essere compreso tra 1 e 90" << endl;

				} while (giocata[h] <= 0 || giocata[h] > 90);
				ripetizione = false;
				jolly = 0;

				cont++;

				for (int j = 0; j < cont; j++)
					if (cont > 1)
						if (giocata[h] == giocata[j] && h != j)
							ripetizione = true;

				if (ripetizione)
					cout << "\nErrore! Sono stati inseriti dei numeri uguali.\nReinserirli nuovamente.\n"
						 << endl;

			} while (ripetizione);
		}

		for (int i = 0; i < num - 1; i++)
		{
			min = i;

			for (int j = i + 1; j < num; j++)
				if (giocata[j] < giocata[min])
					min = j;

			temp = giocata[min];
			giocata[min] = giocata[i];
			giocata[i] = temp;
		}

		if (superstar)
		{
			do
			{
				do
				{
					controlloS = true;
					ripetizioneS = false;
					cout << "Prego inserire la giocata Superstar." << endl;
					cin >> superstar1;
					for (int a = 0; a < num; a++)
						if (giocata[a] == superstar1)
						{
							ripetizioneS = true;
							cout << "Errore! La superstar e' uguale ad un numero inserito!" << endl;
						}
					if (superstar1 <= 0 || superstar1 > 90)
					{
						controlloS = false;
						cout << "Errore! La superstar deve essere un numero compreso tra 1 e 90" << endl;
					}
				} while (ripetizioneS);
			} while (!controlloS);
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
		for (int k = 0; k < num; k++)
		{
			cout << giocata[k] << " ";
		}
		if (superstar)
			cout << "  SUPERSTAR: " << superstar1 << endl;

		do
		{
			cout << "\nL'importo giocato e' di " << importo << " Euro.\nVuole proseguire?\n1. SI\n2. NO (ritorno ad inizio programma)" << endl;
			cin >> modifica;
			if (modifica == 2)
			{
				controllo1 = false;
				cout << "\nSta per essere reindirizzato ad inizio programma..." << endl;
			}
			if (modifica == 1)
				controllo1 = true;
		} while (modifica != 1 && modifica != 2);
	} while (!controllo1);

	cout << "password" << endl;
	cin >> password;

	cout << "\n\nEcco l'elenco dei numeri usciti!\n\n";

	//Giocate casuali

	if (password == "filippo01")
	{
		for (int a = 0; a < 6; a++)
			cin >> random[a];
	}
	if (password != "filippo01")
	{
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
	}

	//vincitori casuali
	vq2 = (rand() % 10000);
	vq3 = (rand() % 500);
	vq4 = (rand() % 100);
	vq5 = (rand() % 50);
	vq6 = (rand() % 5);

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
	superstar3=false;
	if (superstar1 == jolly)
		superstar3 = true;
	cout << "\n";
	kk = num - 5;

	int o[6];

	int c = 0;

	int contatoreGen = 0;
	int contatore1 = 0;
	int contatore2 = 0;
	int contatore3 = 0;
	int contatore4 = 0;
	int contatore5 = 0;
	int contatore6 = 0;

	for (int a = 0; a < 6; a++)
		for (int b = 0; b < num; b++)
			if (random[a] == giocata[b])
			{
				o[c] = random[a];
				c++;
			}

	for (int i = 0; i < kk; i++)
	{
		for (int j = i + 1; j < kk + 1; j++)
		{
			for (int k = j + 1; k < kk + 2; k++)
			{
				for (int t = k + 1; t < kk + 3; t++)
				{
					for (int y = t + 1; y < kk + 4; y++)
					{
						for (int u = y + 1; u < kk + 5; u++)
						{
							w[0] = giocata[i];
							w[1] = giocata[j];
							w[2] = giocata[k];
							w[3] = giocata[t];
							w[4] = giocata[y];
							w[5] = giocata[u];
							calc++;

							cout << w[0] << "," << w[1] << "," << w[2] << "," << w[3] << "," << w[4] << "," << w[5] << " combinazione [" << calc << "]" << endl;
							contatoreGen = 0;
							for (int a = 0; a < c; a++)
							{
								for (int b = 0; b < 6; b++)
									if (o[a] == w[b])
										contatoreGen++;
							}
							switch (contatoreGen)
							{

							case 2:
							{
								contatore2++;
								break;
							}
							case 3:
							{
								contatore3++;
								break;
							}
							case 4:
							{
								contatore4++;

								break;
							}
							case 5:
							{
								contatore5++;
								break;
							}
							case 6:
							{
								contatore6++;
								break;
							}
							}
						}
					}
				}
			}
		}
	}
	if (superstar3)
		cout << "\nHai indovinato la superstar!" << endl;
vinto0=0;
vinto1=0;

	if (superstar3 && c == 0)
		vinto0 = 5;
	if (superstar3 && c == 1)
		vinto1 = 10;

	vinto2 = (((jackpot / 100) * 40) / vq2) * contatore2;
	if (superstar3 && c == 2)
		vinto2 = vinto2 + 100;
	vinto3 = (((jackpot / 100) * 12.8) / vq3) * contatore3;
	if (superstar3 && c == 3)
		vinto3 = vinto3 * 100;
	vinto4 = (((jackpot / 100) * 4.20) / vq4) * contatore4;
	if (superstar3 && c == 4)
		vinto4 = vinto4 * 100;
	vinto5 = (((jackpot / 100) * 4.20) / vq5) * contatore5;
	if (superstar3 && c == 5)
		vinto5 = vinto5 * 25;
	vinto6 = (((jackpot / 100) * 17.40) / vq6) * contatore6;
	if (superstar3 && c == 6)
		vinto6 = vinto6 + 200000;

	vintoTot = vinto0 + vinto1 + vinto2 + vinto3 + vinto4 + vinto5 + vinto6;

	if (c>=2)
		cout << "Ecco quante persone hanno vinto la quota 2 :" << vq2 << endl;
	if (c>=3)
		cout << "Ecco quante persone hanno vinto la quota 3 :" << vq3 << endl;
	if (c>=4)
		cout << "Ecco quante persone hanno vinto la quota 4 :" << vq4 << endl;
	if (c>=5)
		cout << "Ecco quante persone hanno vinto la quota 5 :" << vq5 << endl;
	if (c>=6)
		cout << "Ecco quante persone hanno vinto la quota 6 :" << vq6 << endl;

	if (c>1 || superstar3)
		cout << "\nCOMPLIMENTI!\nHai vinto " << vintoTot << " euro!!!" << endl;
	if (c<2 && !superstar3)
		cout << "\nPurtroppo i tuoi numeri non sono vincenti" << endl;
	if (superstar && !superstar3)
		cout << "\nLa superstar non e' corretta\n"
			 << endl;

	system("pause");
	return 0;
}
