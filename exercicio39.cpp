#include <iostream>

using namespace std;
int main(){

string nome[9][20];
float horas[9];
float salario[9],salarioliq[9],salariobruto[9];
int i;

for(i=0;i<=9;i++){ 
cout<<"\nNome do funcionario "<<i<<" : ";
cin>>nome[i][20];
cout<<"\nHoras trabalhadas do funcionario "<<i<<" : ";
cin>>horas[i];
cout<<"\nSalario do funcionario "<<i<<" : ";
cin>>salario[i];

salariobruto[i]=horas[i]*salario[i];
salarioliq[i]=(salariobruto[i]*0.11);
cout<<"\nSalario liquido do funcionario "<<i<<" : "<<salarioliq[i];
}
system("pause");
return(0);
}