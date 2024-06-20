/*
Fecha:Autor:
Orden
*/
//suma de los numeros desde el 1 hasta n
#include<iostream> 
using namespace std;
int suma(int n)
{
    int suma = 0;
    int i=1;
    while (i<=n)
    {
        suma = suma +i;
        i++;
    }
    return suma;
}
//sum recursiva de los numeros i hasta n
int SumaRecursiva(int n, int i)
{
    if(i<=n)
    return SumaRecursiva(i+1,n) +i;
    else 
    return 0;
}

int main()
{
    cout<<endl<<"la suma de los 5 primeros numeros es "<<suma(5);
    cout<<endl<<"la suma de los 5 primeros numeros es "<<SumaRecursiva(0, 6);
}