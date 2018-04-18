#include <iostream>

using namespace std;
int main(){

string nome;
int codigo,turno;
float horastrab,salario;

cout<<"\nNome:";
cin>>nome;
cout<<"\nCodigo do cargo: (1,2)";
cin>>codigo;
cout<<"\nHoras trabalhadas: ";
cin>>horastrab;
cout<<"\nTurno:(1,2,3) ";
cin>>turno;

if(codigo==1)
    salario=horastrab*5;
else
salario =horastrab*8;

if(turno==1)
salario*=1.03;
else if(turno ==2)
salario*=1.04;
else
salario*=1.05;

cout<<"Seu salario base: "<<salario;
system("pause");
return(0);
}