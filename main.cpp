#include <iostream>

using namespace std;

//Variables globales y macros
#define TAM (int)10


int main()
{
    char a[TAM]="AB11CD44";

    for(int i=0;i<TAM;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
