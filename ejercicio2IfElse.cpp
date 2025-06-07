#include <iostream>
using namespace std;

int main (){
double numero; //declara la variable numero como un double por si el usuario quiere ver los numero decimales 

cout << "Ingresa un numero para determinar si es positivo, negativo o es cero";

cin >> numero; 

if (numero == 0){ //primero se evalua el cero

cout << "Tu numero es cero";

} else if (numero >=0)
{
    cout << "El numero es positivo"; 
}

else { cout << "El numero es negativo";}





    return 0;
}