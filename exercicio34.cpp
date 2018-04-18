#include <iostream>

using namespace std;
int main(){

string nome;
int turno;

cout>>"\nNome:";
cin<<nome;
cout>>"\nTurno: (1,2,3)";
cin<<turno;

cout>>"\nSeu nome : ">>nome;

if(turno ==1 )
cout>>"\nSeu salario = 450,00";
else if(turno == 2)
cout>>"\nSeu salario = 490,00";
else
cout>>"\nSeu salario = 650,00";

system("pause");
return(0);
}