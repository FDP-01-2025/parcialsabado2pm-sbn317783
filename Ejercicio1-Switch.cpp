#include <iostream>
using namespace std;
#include <cctype> // convierte a minusculas para que no haya errores por parte del usuario

main (){
char calificacion;
cout << "Escribe una calificacion usando el sistema americano";
cin >> calificacion;

switch (calificacion)
{
case 'A':
    cout << "Exelente";
    break;


case 'B': 
    cout << "Muy Bueno";
    break;    

case 'C':
    cout << "Bueno";
    break;

case 'D':
    cout << "No muy bien";

case 'F':
    cout << "Reprobado";

default:
    break;
}




return 0;

}