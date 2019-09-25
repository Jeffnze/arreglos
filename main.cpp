#include <iostream>

using namespace std;
//ejercicio 1
/*void imprimir(int arr[], int tam){
    while(tam<3){
        cout<<arr[tam]<<endl;
        tam++;
    }
    return;
    }

int main()
{
    int arr[3]={10,20,30};
    int tam = 0;
    imprimir(arr, tam);
    return 0;
}

//ejercicio 2
void sumar(int arr[], int tam){
    int suma = 0;
    while(tam<3){
        suma=suma+arr[tam];
        tam++;
    }
    cout<<suma<<endl;
    return;
    }

int main()
{
    int arr[3]={10,20,30};
    int tam = 0;
    sumar(arr, tam);
    return 0;
}*/

int sumar(int arr[], int tam){
    int suma = 0;
    if(tam==3){
        suma=suma+arr[tam];
        return suma;
    }
    else{
        suma=suma+arr[tam];
        return sumar(tam++);
    }
    cout<<suma<<endl;
    return;
    }

int main()
{
    int arr[3]={10,20,30};
    int tam = 0;
    sumar(arr, tam);
    return 0;
}

