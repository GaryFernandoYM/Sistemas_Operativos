#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de la variable x y asignaci�n de un valor
    int x = 8;
    
    // Declaraci�n de un puntero ptr y asignaci�n de la direcci�n de memoria de x al puntero
    int *ptr = &x; 

    // Imprimir la direcci�n de memoria de x
    cout << "La direcci�n de memoria de x es: " << &x << endl;

    // Imprimir el valor del puntero ptr (que es la direcci�n de memoria de x)
    cout << "La direcci�n almacenada en el puntero ptr es: " << ptr << endl;

    // Imprimir el valor apuntado por el puntero ptr (que es el valor de x)
    cout << "El valor apuntado por el puntero ptr es: " << *ptr << endl;

    // Imprimir la direcci�n de memoria del puntero ptr
    cout << "La direcci�n de memoria del puntero ptr es: " << &ptr << endl;

    return 0;
}

