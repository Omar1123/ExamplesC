#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream.h>

//Esta es la declaraci�n de la funci�n
int suma();

//Esta es la funci�n que realizar� la suma de dos n�meros
//Se recibe como parametro los dos enteros.

int suma(int numero1,int numero2)
{
 int suma;

 suma = numero1+numero2;
 return suma;
}


void main()
{
 int n1,n2,resultado;
 cout<<"PROGRAMA QUE REALIZA SUMA DE DOS NUMEROS ENTEROS"<<endl;

 cout<<"Ingrese primer entero : ";
 cin>>n1;
 cout<<"Ingrese segundo entero : ";
 cin>>n2;
 resultado = suma(n1,n2);
 cout<<endl<<"EL RESULTADO DE SUMAR : "<<n1<<" + "<<n2<<" = "<<resultado<<endl;
 system("pause");

}
