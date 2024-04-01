#include <iostream>
using namespace std;
int main() {
    // Tipos de datos en C y C++
    int a; // Declaración de variable a
    int b; // Declaración de variable b

    // Asignación de valoress
    a = 9;
    b = 5;
    
    int c;
    c=a+b;

    // Imprimir direcciones de memoria

    //std::cout << "Dirección de memoria de a: " << &a << std::endl;
 
    cout << "valor de la variable a: " << a << endl;
    cout << "valor de la variable b: " << b << endl;
    cout << "valor de la variable c: " << c << endl;
    cout << "----------------------------------------- "<< endl;
    
    //El operador "desreferenciacion" nos permite visualizar
    //la direccion de memoria que ocupa una variable por ejemplo
    cout << "La direccion de memoria de la variable a es: " << &a << endl;
    cout << "La direccion de memoria de la variable b es: " << &b << endl;
    cout << "La direccion de memoria de la variable c es: " << &c << endl;




    return 0;
}

