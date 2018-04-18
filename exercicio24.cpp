#include <iostream>
using namespace std;

int main(){

    float s,tr,r1,r2,d,sf;
    int i;

    cout<<"\nDigite saldo inicial:";
    cin>>s;
    sf = s;

        cout<<"\nRetirada 1 : ";
        cin>>r1;
        cout<<"\nRetirada 2 : ";
        cin>>r2;
        s= s-(r1+r2);
        cout<<"\nDeposito : ";
        cin>>d;
        s = s+d;
        cout<<"\nSaldo atual : "<<s<<"\nSaldo inicial : "<<sf<<"\n";
    
    system("PAUSE");
    return 0;
}