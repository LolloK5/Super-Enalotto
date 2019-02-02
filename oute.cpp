#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//usare SC per aggiungere cliente (usare variabile grandezza1 per aumentare la grandezza dell'archivio)

#define grandezza1 5

struct cliente {
  char nome_cognome [50];
  int anno_di_nascita;
} clients (grandezza1)

void stampaNome (cliente);

int main ()
{
  int n;
  for (n=0; n<grandezza1; n++)
  {
    cout << "Dammi il nome e cognome: ";
    cin.getline (clients[n].nome_cognome,50);
    cout << "Dammi l'anno di nascita: ";
    cin >> clients[n].anno_di_nascita;
  }
  cout << "\nHai inserito i seguenti dati:\n";
  for (n=0; n<grandezza1; n++)
    scriviNome (clients[n]);
  return 0;
}

void scriviNome (cliente)
{
  cout << cliente.nome_cognome;
  cout << " (" << cliente.anno_di_nascita << ")\n";
}
}
