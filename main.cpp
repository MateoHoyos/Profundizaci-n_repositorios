#include <iostream>

using namespace std;

//Variables globales y macros
#define TAM (int)50


int main()
{
    char a[TAM]="AB11CD44EF5X5";

    for(int i=0;i<TAM;i++){
        if(a[i]!='\0'){
            cout<<a[i]<<endl;
        }
    }

    cout<<"Numero: ";
    for(int i=0;i<TAM;++i){
        if(a[i]>='0' and a[i]<='9'){
            cout<<a[i];
        }
    }

    cout<<endl;

    return 0;
}
