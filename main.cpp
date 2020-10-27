#include <iostream>

using namespace std;

//Variables globales y macros
#define TAM (int)50


int main()
{
    char a[TAM]="AB11CD44EF5X5";
    char numeros[TAM]={0};

    cout<<"Numero: ";
    //int n=0;
    int contadorDigitos=0;

    for(int i=0;i<TAM;++i){
        if(a[i]>='0' and a[i]<='9'){
            numeros[contadorDigitos++]=a[i];
            //cout<<a[i];
        }
    }

    for(int i=contadorDigitos-1;i>=0;--i){
            cout<<numeros[i];
    }

    cout<<endl;

    return 0;
}
