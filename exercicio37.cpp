#include <iostream>

using namespace std;
int main(){

string nome;
int tel,imp,tipo;
float valor,valorf;

cout<<"\nNome:";
cin>>nome;
cout<<"\nTelefone:";
cin>>tel;
cout<<"\nImpulsos Registrados:";
cin>>imp;
cout<<"\nValor total de interurbanos:";
cin>>valor;
cout<<"\nTipo de telefone: \n1 = residencial\n2 = comercial\n";
cin>>tipo;

float tarifa;
if(tipo==1)
tarifa=38.14;
else
tarifa=64.69;
cout<<"\nValor da tarifa básica:"<<tarifa;

float valorimp;
if(imp>100){
imp-=100;
valorimp=(imp*0.15);
}else{
    valorimp = imp;
}
cout<<"\nValor do servico local:"<<valorimp;
valor*=1.5;
cout<<"\nValor de interurbanos:"<<valor;

cout<<"\nTotal da conta: "<<tarifa+valor+valorimp;





system("pause");
return(0);
}