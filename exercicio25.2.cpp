#include <iostream>
using namespace std;

int main(){

    //variaveis necessarias
    float s,tr,r1,r2,d,sf;
    int i;
    //lendo saldo inicia do usuario
    cout<<"\nDigite saldo inicial:";
    cin>>s;
    sf = s;
        //retiradas do cliente
        cout<<"\nRetirada 1 : ";
        cin>>r1;
        cout<<"\nRetirada 2 : ";
        cin>>r2;
        //retira do saldo inicial
        s= s-(r1+r2);
        //leio o deposito
        cout<<"\nDeposito : ";
        cin>>d;
        //adiciono no saldo 
        s = s+d;
        //printa saldo inicial e final
        cout<<"\nSaldo atual : "<<s<<"\nSaldo inicial : "<<sf<<"\n";
    
    system("PAUSE");
    return 0;
}