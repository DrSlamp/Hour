/* Codigo de apoyo para la elaboracion del proyecto Hour
Para uso de Tcorp y sus 3 integrantes.
by Paul
*/ 

#include <vector>
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "conio.h"

using namespace std;






int main(){


//para saber el tiempo de ejecucion del programa (se podria hacer una especie de EASTER-EGG en la interfaz grafica para que el usuario interesado descubra cuanto tardo ejecutandose la aplicacion)
std::time_t start, end;
long delta = 0;
start = std::time(NULL);



    char *a[] = {

	"2o08",

	"2o14",

	"4o08",

	"2o12",

	"2o07",

	"2o11",

	"2o05",

	"2o04",

	"2o03",

	"2o01",

	"2o02"

};






                           int salon1;
                           int salon2;
                           int salon3;
                           int salon4;
                           int salon5;



	/* Si se necesita escoger un nombre aleatoriamente

		lo podemos hacer de la siguiente forma: */


	//randomize(); /* Reinicializa el generador de numeros aleatorios */
	srand(time(NULL));

	salon1 = rand(); /* Numero aleatorio de 0-32767 */

	salon1 = salon1 % 11; /* i = numero entre 0 y 10 */

	salon2 = rand(); /* Numero aleatorio de 0-32767 */

	salon2 = salon2 % 11; /* i = numero entre 0 y 10 */

	salon3 = rand(); /* Numero aleatorio de 0-32767 */

	salon3 = salon3 % 11; /* i = numero entre 0 y 10 */

	salon4 = rand(); /* Numero aleatorio de 0-32767 */

	salon4 = salon4 % 11; /* i = numero entre 0 y 10 */

	salon5 = rand(); /* Numero aleatorio de 0-32767 */

	salon5 = salon5 % 11; /* i = numero entre 0 y 10 */


	if (salon1 == salon2) {
        salon2 = rand();
	}
     else if (salon2 == salon3){
	salon3 = rand();
	}else if (salon3 == salon4){
	salon4 = rand();
	}else if  (salon4 == salon5){
	salon5 = rand();
	}else if (salon5 == salon1){
	salon1 = rand();
	} else {

	cout<<" alguno de los salones colisiona o existe alg�n error"<<endl;

	}





	//getch();





    vector<string> v; //Declaraci�n de 'v' como vector de enteros (int)

    v.push_back("*|   Lunes   |*|");  v.push_back("*|   martes   |*|");   v.push_back("*|   miercoles   |*|"); v.push_back("*|   jueves   |*|");  v.push_back("*|   viernes   |*|");


    cout << v[0] << a[salon1] <<v[1]<< a[salon2]<< v[2] <<a[salon3]  <<v[3] << a[salon4] <<   v[4] <<  a[salon5]  <<"*|"  <<   endl;
    /*
    a[salon1]
    a[salon2]
    a[salon3]
    a[salon4]
    a[salon5]
    */


/*

    v.erase(v.begin()); //Borramos el elemento 1

   cout << v[0] << a[salon1] <<v[1]<< a[salon2]<< v[2] <<a[salon3]  <<v[3] << a[salon4] <<   v[4] <<  a[salon5]  <<"*|"  <<   endl;

  */

   // cout << v[0] << endl; //Mostramos el elemento 2,
                           //ya que hemos borrado el 1


end = std::time(NULL);
delta = end - start;

// salida del medidor antes de finalizar nuestro programa--

cout<<" tiempo total de ejecucion  -> "<<delta<<endl;

    return 0;
}
