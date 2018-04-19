#include <iostream>

using namespace std;
int main(){

string nome;
float altura;
int sexo,i=0,mediah=0,maiorh=0,menorh=0,homem,mulher;
int somah;

while(nome!="sair"){
cout<<"\n(Digite sair quando quiser sair)\nNome : ";
cin>>nome;
cout<<"\nAltura pessoa "<<i++<< " : ";
cin>>altura;
cout<<"\n(1 p/Homem 2 p/Mulher)\nSexo : ";
cin>>sexo;
if(sexo==1){
homem++;
somah+=altura;
}
}

cout<<"\n\n\nMedia de altura dos homens : "<<(float)somah/homem<<"\n";
system("pause");
return(0);
}