#include<iostream>
using namespace std;
int  main ()
{
    int num;
    do
    {
        cout<<"Quanti numeri si vogliono giocare? Inserire un numero compreso tra 6 e 12."<<endl;
        cin>>num;
    }while(num<=6 || num>12);
    bool superstar;
    string r1;
    cout<<"Si vuole giocare la Superstar?";
    cin>>r1;
    if(r1=="si"||r1=="Si"||r1=="SI") superstar=true;
    if(r1=="no"||r1=="No"||r1=="NO") superstar=false;
    int giocata[num];
    for(int h=0;h<=num-1;h++)
    {
        cout<<"Inserire giocata numero "<<h+1<<endl;
        cin>>giocata[h];
    }
    int combinazioni[]


    cout<<"L'importo giocato e' "<<costo<<endl;
}
