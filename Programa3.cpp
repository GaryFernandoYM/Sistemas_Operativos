#include <iostream>
using namespace std;

int main() {
    // Declaración de la variable x y asignación de un valor
    int x = 8;
    
    // Declaración de un puntero ptr y asignación de la dirección de memoria de x al puntero
    int *ptr = &x; 

    // Imprimir la dirección de memoria de x
    cout << "La dirección de memoria de x es: " << &x << endl;

    // Imprimir el valor del puntero ptr (que es la dirección de memoria de x)
    cout << "La dirección almacenada en el puntero ptr es: " << ptr << endl;

    // Imprimir el valor apuntado por el puntero ptr (que es el valor de x)
    cout << "El valor apuntado por el puntero ptr es: " << *ptr << endl;

    // Imprimir la dirección de memoria del puntero ptr
    cout << "La dirección de memoria del puntero ptr es: " << &ptr << endl;

    return 0;
}

