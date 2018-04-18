/*30. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
1. Para homens: (72.7 * h) – 58
2. Para mulheres: (62.1 * h) – 44.7 (h = altura) 
*/
#include <iostream>

using namespace std;
int main(){

    float altura,pesoideal;
    int sexo;

    cout<<"Qual sua altura?";
    cin>>altura;
    cout<<"Qual sexo? 1 para homem e 2 para mulher";
    cin>>sexo;

    if(sexo == 1){
    pesoideal = altura*72.7-58;
    cout<<"\nPeso ideal: "<<pesoideal;
    }else{
    pesoideal=(altura* 62.1)-44.7;
    cout<<"\nPeso ideal: "<<pesoideal;
    }
system("pause");
return(0);
}
