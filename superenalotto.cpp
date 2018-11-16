#include<iostream>
using namespace std;
int  main ()
{
    int num;
    int costo;
    int jolly;
    bool superstar;
    do
    {
        cout<<"Quanti numeri si vogliono giocare? Inserire un numero compreso tra 6 e 12."<<endl;
        cin>>num;
    }while(num<6 || num>12);
    cout<<"Si vuole giocare la superstar?\n\nClicca sul numero 1 se si vuole giocare, 2 se non si vuole."<<endl;
        switch (jolly)
    {
    case 1:
        {
        cin>>jolly;
        superstar=true;
        break;
        }

    case 2:
        {
        cin>>jolly;
        superstar=false;
        break;
        }


    }


    int giocata[num];

    for(int h=1;h<=num;h++)
    {
        do
        {
            cout<<"Inserire giocata numero "<<h<<endl;
        cin>>giocata[h];
        if(giocata[h]<=0 || giocata[h]>90)cout<<"Il numero da inserire deve essere compreso tra 1 e 90"<<endl;
        }while (giocata[h]<=0 || giocata[h]>90);

    }





}
