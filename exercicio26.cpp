/*
26. Escreva um programa que leia dois números inteiros informados pelo usuário,
calcule e imprima:
• A soma dos números
• A subtração dos números
• A multiplicação dos números
• O quociente inteiro da
divisão
• O resto da divisão
• O resultado da divisão real
• O resultado da potenciação
do 1º número elevado ao 2º
*/
#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"");

    int x,y;
    cout<<"\nX :";
    cin>>x;
    cout<<"\nY :";
    cin>>y;
    cout<<"\nSoma : "<<x+y;
    cout<<"\nSubtração : "<<x-y;
    cout<<"\nMultiplicação : "<<x*y;
    if(y==0)
    cout<<"\nNao tem como dividir por 0";
    else
    cout<<"\nQuociente inteiro da divisão : "<<x/y;
    if(y==0)
    cout<<"\nNao tem como dividir por 0";
    else
    cout<<"\nResto da divisão : "<<x%y;
    if(y==0)
    cout<<"\nNao tem como dividir por 0";
    else
    cout<<"\nDivisão real : "<<(float)x/y;
    cout<<"\nPotencia do 1 elevado ao 2 : "<<pow(x,y)<<"\n";

system("pause");
return 0;
}
