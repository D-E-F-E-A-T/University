#include <iostream>
using namespace std;
int main(){

    float p=2,m=4,d=3,mp,ma,np,nm,nd;

    cout<<"\nPontuação em Portugues:";
    cin>>np;
    cout<<"\nPontuação em Matemática:";
    cin>>nm;
    cout<<"\nPontuação em Direito:";
    cin>>nd;

    ma = (np+nm+nd)/3;
    cout<<"\n\nMedia aritmetica : "<<ma;

    mp = (((np*p)+(nm*m)+(nd*d))/(p+m+d));
    cout<<"\n\nMedia ponderada : "<<mp;

system("pause");
return 0;
}