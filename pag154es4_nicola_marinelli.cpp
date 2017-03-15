#include <iostream>
using namespace std;

int main(){
int N=0;
int somma=0;
int prodotto=1;
cout<<"Inserisci il numero di valori che vuoi immettere (N<=10):"<<endl;
cin>>N;
int v[N];
for(i=1, i<=N, i++){
cout<<"Inserisci il "<<i<<" numero:"<<endl;
cin>>numero_inserito;
v[i]=numero_inserito;
if (i/2==0)prodotto=prodotto * v[i];
else somma=somma+v[i];
}
cout<<"Il prodotto dei numeri con posizione pari e':"<<prodotto<<endl;
cout<<"La somma dei numeri con posizione dispari e':"<<somma<<endl;
}
