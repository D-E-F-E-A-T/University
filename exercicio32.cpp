/*32. Escreva um algoritmo que leia o NOME e o SALÁRIO BRUTO de um funcionário.
O programa deverá calcular e imprimir o salário líquido, sendo que:
Salário Bruto Desconto
Até R$ 800,00 9% do salário bruto
De R$ 800,01 a R$ 1500,00 10% do salário bruto
Acima de R$ 1500,00 11% do salário bruto
SALÁRIO LÍQUIDO = SALÁRIO BRUTO – DESCONTO */
#include <iostream>

using namespace std;
int main(){
    string nome;
    float bruto,liquido;

    cout<<"\nNome: ";
    cin>>nome;
    cout<<"\nSalario bruto: ";
    cin>>bruto;
    if(bruto<=800){
        bruto *= 0.9;
    }else if(bruto >= 800.01 && bruto <=1500){
        bruto *= 0.10;
    }else{
        bruto *= 0.11;
    }
    cout<<"Seu salario liquido = "<<bruto;

system("pause");
return(0);
}
