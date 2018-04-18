/*33. Escreva um algoritmo que leia o nome, a idade e a renda familiar de um esportista
do Clube Horse. Imprimir a categoria do esportista, com base na seguinte tabela:
Idade Categoria
Até 15 anos Infantil
De 16 a 18 anos Juvenil
Acima de 18 anos Adulto
Imprimir também a classe social do esportista, com base na tabela abaixo:
Renda Familiar Classe Social
Até R$ 1.000,00 Média baixa
De R$ 1.000,01 a R$ 3.500,00 Média
Acima de R$ 3.500,00 Média alta */

#include <iostream>

using namespace std;
int main(){
    string nome;
    int idade;
    float rendafam;
    cout<<"\nDigite seu nome: ";
    cin>>nome;
    cout<<"\nDigite sua idade: ";
    cin>>idade;
    cout<<"\nDigite a renda da sua familia: ";
    cin>>rendafam;
    if(idade<=15)
    cout>>"\nCategoria Infantil";
    else if(idade=16&&<=18)
    cout>>"\nCategoria Juvenil";
    else
    cout>>"\nCategoria Adulto";

    if(rendafam<=1000)
    cout>>"\nClasse Social : Media baixa";
    else if(rendafam>=1000.01 && rendafam <= 3500)
    cout>>"\nClasse Social : Media";
    else
    cout>>"\nClasse Social : Media alta";

system("pause");
return(0);
}
