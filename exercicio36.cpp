#include <iostream>

using namespace std;
int main(){

string nome;
int filhos;
float conta,mensalidade = 120;


cout<<"\nDigite seu nome:";
cin>>nome;
cout<<"\nQuantos filhos?";
cin>>filhos;

if(filhos==1)
mensalidade*=0.10;
else if(filhos == 2|| filhos==3)
mensalidade*=0.15;
else
mensalidade*=0.20;

cout<<"\nValor a pagar:"<<mensalidade*filhos<<"\n";

system("pause");
return(0);
}