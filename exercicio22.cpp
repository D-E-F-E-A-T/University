#include <iostream>
using namespace std;
int main(){
    float f,c;
    cout<<"temperatura em fahrenheit :";
    cin>>f;

    c=(f-32)*5/9;
    
    cout<<"temperatura em celsius:"<<c<<"\n";

    system("PAUSE");
    return(0);

     }