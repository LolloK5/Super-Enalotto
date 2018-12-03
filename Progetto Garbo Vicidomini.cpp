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
	int random[6];
	int giocata[12];
	int jolly;
	int superstar1;
    int quota;
	double vinto;
	int soldi;
	bool ripetizione;
	bool controllo1;
	bool controllo2 = false;
	bool controllo3 = true;
	bool superstar;
	bool superstar3;
	double importo,vinto2,vinto3,vinto4,vinto5,vinto6,vintoTot;
	string modifica;
int w[20];
int vq2,vq3,vq4,vq5,vq6;
int jackpot=10000000;
	int kk=num-5;
 int calc;
int vet[6];
	

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

    
    //vincitori casuali
    vq2=(rand()%10000)+1;
    vq3=(rand()%500)+1;
    vq4=(rand()%100)+1;
    vq5=(rand()%50)+1;
    vq6=(rand()%5)+1;
    
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
    
kk=num-5;
    
 int o[6];
	int c=0;
    
 int contatoreGen,contatore2,contatore3,contatore4,contatore5,contatore6;
       
    for(int a=0;a<6;a++)
    for(int b=0;b<num;b++)
    if(random[a]==giocata[b])
    {
    o[c]=random[a];
    c++;
}
    o[0]=1;
    o[1]=2;o[2]=3;
    
	for(int i=0;i<kk;i++)
	{
		for(int j=i+1;j<kk+1;j++)
		{
			for(int k=j+1;k<kk+2;k++)
			{
				for(int t=k+1;t<kk+3;t++)
				{
					for(int y=t+1;y<kk+4;y++)
					{
						for(int u=y+1;u<kk+5;u++)
						{
							w[0]=giocata[i];
							w[1]=giocata[j];
							w[2]=giocata[k];
							w[3]=giocata[t];
							w[4]=giocata[y];
							w[5]=giocata[u];
       calc++;
                            
		cout<<w[0]<<","<<w[1] <<","<<w[2]<<","<<w[3]<<","<<w[4]<<","<<w[5]<<" combinazione ["<<calc<<"]"<<endl;
                contatoreGen=0;
                  for(int a =0;a<6;a++){
                                
                  for(int b=0;b<6;b++) 
                   if(w[b]==o[a])contatoreGen++;
                            }
                    switch(contatoreGen)
                            {
                            case 2:
                                {
                                contatore2++;
                                quota=2;
                                    break;
                            }
                          case 3:
                                {
                              
                                contatore3++;
                                    quota=3;
                                    break;
                            }
                            case 4:
                                {
                                
                                
                                contatore4++;
                                    quota=4;
                                    break;
                            }
                           case 5:
                                {
                                
                                
                               
                                contatore5++;
                                    quota=5;
                                    break;
                            }
                            case 6:
                                
                                
                                {
                                
                             
                                contatore6++;
                                    quota=6;
                                    break;
                            } 
                        }  
                                               		
						}
					}
                    
				}
			}
		}
	}
    
    
    cout<<"Ecco quante persone hanno vinto la quota 2 :"<<vq2<<endl;
    
    cout<<"Ecco quante persone hanno vinto la quota 3 :"<<vq3<<endl;
    switch (quota)
    {
    case 2:{
        vinto2=(((jackpot/100)*40)/vq2)*contatore2;
    break;
    }
        case 3:
        {
    vinto2=(((jackpot/100)*40)/vq2)*contatore2;
        vinto3=(((jackpot/100)*12.8)/vq3)*contatore3;
    break;
}
        case 4:
        {
    vinto2=(((jackpot/100)*40)/vq2)*contatore2;
        vinto3=(((jackpot/100)*12.8)/vq3)*contatore3;
        vinto4=(((jackpot/100)*4.20)/vq4)*contatore4;
    break;
}
        case 5:
        {
    vinto2=(((jackpot/100)*40)/vq2)*contatore2;
        vinto3=(((jackpot/100)*12.8)/vq3)*contatore3;
        vinto4=(((jackpot/100)*4.20)/vq4)*contatore4;
           vinto5=(((jackpot/100)*4.20)/vq5)*contatore5;
    break;
}
         case 6:
        {
    vinto2=(((jackpot/100)*40)/vq2)*contatore2;
        vinto3=(((jackpot/100)*12.8)/vq3)*contatore3;
        vinto4=(((jackpot/100)*4.20)/vq4)*contatore4;
           vinto5=(((jackpot/100)*4.20)/vq5)*contatore5;
            vinto6=(((jackpot/100)*17.40)/vq6)*contatore6;
    break;
}
}
    
    
    vintoTot=vinto2+vinto3+vinto4+vinto5+vinto6;
  if(quota>1)cout<<"Hai vinto "<<vinto2<<endl;
    if(quota<2)cout<<"Non hai vinto sfigato di merda"<<endl;
    
    
	}