//Programa 1
//Barranco Diaz Carmen Viridiana
//08 noviembre 2017
//Iniciamos el programa

#include <iostream>
using namespace std;
int main()
{
   //Declaramos nuestras variables
   //Declarar tus variables como enteras, implica que el resultado de la división tendría que ser siempre entero, sin embargo no lo es, de hecho estás declarando a la variable V como float. Entonces lo más apropiado es declararlas también como float. 
   //int d,t;
  float d,t;
   float V;
   //Como queremos calcular la velocidad (V)
   cout<<"Calculo de la velocidad"<<endl;
   // No necesitas leer la velocidad, porque es lo que vas a calcular. 
   //cin>>V;
   //Se agregan las variables que se van a pedir 
   cout<<"Ingrese la distacia"<<endl;
   cin>>d;
   cout<<"Ingrese el tiempo"<<endl;
   cin>>t;
//Agregamos un condicional para que si t=0 se indetermine 
   if(t !=0)
     {
       V=d/t;
       cout<<"La velocidad es "<< V;
     }
 

return 0;
}


