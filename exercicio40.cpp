#include <iostream>

using namespace std;
int main(){
string nome,sexo;
int mod,idade,mulheres=0,homens=0,i;
int somaidh=0,somaidm=0,contidh=0,mbasq=0;

for(i=0;i<=9;i++){
cout<<"\n\tAtleta numero"<<i+1;
cout<<"\nNome:   ";
cin>>nome;
cout<<"\n1 - Voley\n2 - Basquete\n3 - Futsal\nModalidade esportiva :   ";
cin>>mod;
cout<<"\nIdade :   ";
cin>>idade;
cout<<"\nSexo(M/F)  :";
cin>>sexo;
system("cls");

    if(sexo == "M" || sexo == "m"){
        homens++;
        somaidh += idade;
        if (idade>=25 && idade<=30){
            contidh ++;
        }
    }
    else{
        mulheres++;
        somaidm+=idade;
        if(mod==2){
            mbasq++;
        }
    }
}
cout<<"\nMedia idade Masculina : "<<(float)somaidh/homens;
cout<<"\nMedia idade Feminina : "<<(float)somaidm/mulheres;
cout<<"\nPorcentagem de mulheres no basquete : "<<(float)100*mbasq/somaidm;
cout<<"\nHomens entre 25 e 30 anos : "<<contidh<<"\n\n\n\n\n\n";

system("pause");
return(0);
}