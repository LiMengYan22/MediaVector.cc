#include <iostream>
using namespace std;
const int ELEM = 3; //declarar constante ELEM
float media(int *); //funcion: media que recibe un puntero* a int y devuelve un float
int main()
{
   int a[ELEM]; 
   int i;
   for(i=0;i<ELEM;i++)
   {
    cout << "Introduce elemento " << i+1 << " del array: ";
    cin >> a[i];
   }
   cout << "Media: " << media(a) << endl; //en la llamada a la funcion: media se le envía el array (a)
   //system("pause");
   return(0);
}


//llamada a función para calcular la media
float media(int *v) //v contiene la direccion * de inicio del array
{
 float media=0;
 int i;
 for(i=0;i<ELEM;i++)
 {
     media = media + *v; //se acumula en media la suma de todos los elementos
     v++; //siguiente elmento del array
     // las dos instrucciones anteriores se pueden escribir en una sola:
     //media = media + *v++;

 }
 return media/ELEM;
}
