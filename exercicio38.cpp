#include <iostream>

using namespace std;
int main(){

string nome;
int aulas,i;
float notas[4],notaf,media;

cout<<"\nNome:";
cin>>nome;
cout<<"\nNumero de aulas frequentadas:";
cin>>aulas;
for(i=0;i<=3;i++){ 
cout<<"\nNota prova "<<i<<" : ";
cin>>notas[i];
notaf+=notas[i];
}
media=notaf/4;
cout<<"\nSua nota final:"<<notaf;
cout<<"\nSua media: "<<media;



system("pause");
return(0);
}