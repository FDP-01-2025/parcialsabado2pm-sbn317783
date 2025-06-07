#include <iostream>
using namespace std;

main (){
char calificacion;
cout << "Escribe una calificacion usando el sistema americano\n";
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
    break;

case 'F':
    cout << "Reprobado";
    break;

default:
    cout << "Por favor, asegurese de poner una de las letras del sistema americano en mayuscula";

}


return 0;

}