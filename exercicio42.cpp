#include <iostream>

using namespace std;
int main(){

string nome,pessoas;
int idade=0,soma=0;


for(int i=0;i<=3;i++){
    cout<<"\nNome da pessoa numero "<<i+1<< " : ";
    cin>>nome;
    cout<<"\nIdade da pessoa numero "<<i+1<<" : ";
    cin>>idade;
    soma=soma+idade;

        if(idade>=21)
        pessoas+= nome + "\n";
    
}



cout<<"\nSoma das idades : \n"<<soma<<"\n\n";
cout<<"\nPessoas com idade igual ou maior a 21 : \n"<<pessoas<<"\n\n";
system("pause");
return(0);
}