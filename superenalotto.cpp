#include<iostream>
#include<time.h>
#include <cstdlib>
using namespace std;
int  main ()
{
    int combinazioni;
    int num;
    char g;
    int random[6];
    int giocata[12][924];
    int jolly;
    int superstar1;
    int vinto;
    bool controllo1;
    bool controllo2=false;
    bool controllo3=true;
    bool superstar;
    double importo;
    string modifica;


    do
        {

    do

    {
        cout<<"Quanti numeri si vogliono giocare? Inserire un numero compreso tra 6 e 12.\n"<<endl;
        cin>>num;

    }while(num<6 || num>12);

    do
        {


    cout<<"Si vuole giocare la superstar?\n\nClicca sul numero 1 se si vuole giocare, 2 se non si vuole."<<endl;

            cin>>jolly;
            if(jolly!=1 && jolly !=2)cout<<"Errore"<<endl;

        }while(jolly!=1 && jolly !=2);

        switch (jolly)
    {
    case 1:
        {
            cout<<"\nSuperstar attivato."<<endl;
        superstar=true;
        break;
        }

    case 2:
        {
            cout<<"\nSuperstar non attivato."<<endl;
        superstar=false;
        break;
        }


    }


    cout<<"\nRicordiamo che la giocata vincente avra' una combinazione di numeri\nche vanno dall'1 al 90, e non ci saranno numeri uguali tra loro.\nPer tanto sconsigliamo di inserire numeri uguali poiche' non saranno mai vincenti."<<endl;

    for(int h=1;h<=num;h++)
    {
        do
        {
            cout<<"Inserire giocata numero "<<h<<endl;
        cin>>giocata[h][0];
        if(giocata[h][0]<=0 || giocata[h][0]>90)cout<<"Il numero da inserire deve essere compreso tra 1 e 90"<<endl;
        }while (giocata[h][0]<=0 || giocata[h][0]>90);

    }
    if(superstar)
        {
            cout<<"Prego inserire la giocata Superstar."<<endl;
            cin>>superstar1;
        }

    switch(num)
    {
    case 6:
        {
            importo=1.00;
            combinazioni=1;
            if (superstar)
                importo=1.50 ;
            break;
        }
    case 7:
        {
            importo=7.00;
            combinazioni=7;
            if(superstar)
                importo=10.50;
            break;
        }
    case 8:
        {
            importo=28.00;
            combinazioni=28;
            if(superstar)importo=42.00;
            break;
        }
    case 9:
        {
            importo=84.00;
            combinazioni=84;
            if(superstar)
                importo=126.00;
            break;
        }
    case 10:
        {
            importo=210.00;
            combinazioni=210;
            if(superstar)
                importo=315.00;
            break;
        }
    case 11:
        {
            importo=462.00;
            combinazioni=462;
            if(superstar)
                importo=693.00;
            break;
        }
    case 12:
        {
            importo=924.00;
            combinazioni=924;
            if(superstar)
                importo=1386.00;
            break;
        }
    }
    cout<<"\n\n";
    for(int k=1;k<=num;k++)
    {cout<<giocata[k][0]<<" , ";}
    if(superstar)cout<<" "<<superstar1<<endl;



    do
    {
        cout<<"\nL'importo giocato e' di "<<importo<<" Euro.\nVuole modificare la sua giocata?\nDigiti Si se vuole modificare No se non vuole."<<endl;
        cin>>modifica;
        if(modifica=="Si"){controllo1=false;cout<<"\nSta per essere reindirizzao ad inizio programma..."<<endl;}
        if(modifica=="No")controllo1=true;
    }while(modifica!="Si" && modifica!="No");


    }while(!controllo1);
    cout<<"\n\nEcco l'elenco dei numeri usciti!\n\n";

        //Giocate casuali

     srand(time(NULL));

         for(int i =0;i<6;i++)
         {
         random[i]=(rand()%90)+1;
         for(int j=0;j<i;j++)
         {if(random[i]==random[j])
         {i--;
         break;
         }
         }
         }

    for(int i=0;i<6;i++)cout<<random[i]<<" ";
    cout<<endl;
    cout<<"\nEcco il numero superstar!\n"<<endl;

    jolly=0;
    do{
    srand(time(NULL));
    jolly=(rand()%90)+1;



            for(int y=0;y<6;y++)
        {
            if(jolly=random[y])controllo3=false;
        }
        }while(false);
cout<<"\n"<<jolly<<endl;

    //NEW







    vinto=0;

if(num>6)
{
    for(int w=0;w<combinazioni;w++)
     {
         for(int h=0;h<num;h++)
         {
             for(int i=0;i<num;i++)
                {
                    if(giocata[h][w]==random[i]){vinto++;}
                    if(controllo2)i=combinazioni;

                }

         }
     }
}
if(num=6)
    {
    for(int h=0;h<num;h++)
         {
             for(int i=0;i<num;i++)
                {
                    if(giocata[h][0]==random[i])vinto++;
                    if(controllo2)i=combinazioni;
}


                }
    if (vinto==6) cout<<"VITTORIA!!!";
        else cout<<"\nCi dispiace, i suoi numeri non sono vincenti";

    }
}
