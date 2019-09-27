#include <iostream>

using namespace std;
//ejercicio 1
void imprimir(int arr[], int tam){
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



//ejercicio 2 iterativo
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
}



// ejercicio 2 recursivo
int sumar(int arr[3], int tam, int suma){
    if(tam==3){
        suma=suma+arr[tam];
        return suma;
    }
    else{
       while(tam<3){
        suma=suma+arr[tam];
        cout<<suma<<endl;
        return sumar(arr,tam+1,suma);
       }
    }
    }

int main()
{
    int arr[3]={10,20,30};
    int tam = 0;
    int suma = 0;
    sumar(arr, tam, suma);

    return 0;
}

