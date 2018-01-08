//Barranco Diaz Carmen Viridiana
//Traducir diagrama de flujo a lenguaje c
//el programa comienza con x=1 si 1<=5 entonces ingresarà al ciclo While Cuando x sea mayor que 5 (x>5 )el programa termina.
//luego se ve si x  entre 3, si no lo es entonces el programa imprime el número en la terminal y si es divisible no lo imprime, luego hacemos x=x+2 y vemos si se cumple la condiciòn para que entre o no al ciclo While,
//repitiendo todo lo anterior. El programa llega a un final dado se va sumando 2 a x cuando  cumpla la condidión terminarà el programa.

#include <iostream>
#include <string>
using namespace std;
int main(){
	int x=1;
	while(x<=5){
		if(x%3==0){
			x=x+2;
		}
		else{
			cout<<x<<endl;
			x=x+2;
		}
	}
	return 0;
}
