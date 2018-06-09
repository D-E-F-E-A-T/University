/*
31. Escreva um algoritmo que leia o NOME, NÚMERO DE HORAS TRABALHADAS
e CLASSE FUNCIONAL de um empregado da SNOB Confecções. Calcular e
imprimir o salário líquido, sabendo que:

Classe Funcional Salário/Hora
1                    5,00

2                    9,00
Salário Bruto = Horas Trabalhadas * Salário por Hora
O salário líquido é igual ao salário bruto menos 11% de INSS. 

*/
#include <iostream>

using namespace std;

int main(){
    string nome;
    float horastrab,salarioliq,salariobruto;
    int classe;

    cout<<"\nNome: ";
    cin>>nome;
    cout<<"\nHoras trabalhadas: ";
    cin>>horastrab;
    cout<<"\nClasse: (1 ou 2)";
    cin>>classe;

    if(classe==1){ 
        salariobruto = horastrab * 5;
        salarioliq = (salariobruto*0.11);
        cout<<"Salario Liquido: "<<salarioliq;
    }else{
        salariobruto = horastrab * 9;
        salarioliq = (salariobruto*0.11);
        cout<<"Salario Liquido: "<<salarioliq;
    }
    

system("pause");
return(0);
}