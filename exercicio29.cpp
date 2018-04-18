/*29. Escreva um algoritmo que leia o nome, a idade, o salário e o sexo de uma pessoa.
Imprimir a idade se for um homem e o salário se for uma mulher. */

#include <iostream>

using namespace std;
int main(){

    string nome;
    int idade,sexo;
    float salario;
    cout<<"\nNome: ";
    cin>>nome;
    cout<<"\nIdade: ";
    cin>>idade;
    cout<<"\nSalario: ";
    cin>>salario;
    cout<<"\nDigite 1 para homem e 2 para mulher";
    cin>>sexo;

    if(sexo==1)
    cout<<"\nIdade: "<<idade;
    else
    cout<<"\nSalario: "<<salario<<"\n";

system("pause");
return(0);
}
