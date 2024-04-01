#include <iostream>
using namespace std;

int main() {
	/* muestra las 4 operaciones matematicas*/
    // Declaración de variables
    double num1;
    double num2;
    double num3;
    double resultado_suma;
    double resultado_resta;
    double resultado_division;
    double resultado_multiplicacion;
    
    // Solicitar al usuario que ingrese el primer número
    cout << "Ingrese un numero: ";
    cin >> num1;
    
    // Solicitar al usuario que ingrese el segundo número
    cout << "Ingrese otro numero: ";
    cin >> num2;
    // Solicitar al usuario que ingrese el tercero número
    cout << "Ingrese otro numero: ";
    cin >> num3;
	
    resultado_suma = num1 + num2+ num3;
    resultado_resta = num1 - num2-num3;
    resultado_division = num1 / num2/ num3;
    resultado_multiplicacion = num1 * num2* num3;
	
    // Imprimir los resultados
    cout << "El resultado de la suma es: " << resultado_suma << endl;
    cout << "El resultado de la resta es: " << resultado_resta << endl;
    cout << "El resultado de la divisi0n es: " << resultado_division << endl;
    cout << "El resultado de la multiplicacion es: " << resultado_multiplicacion << endl;

    return 0;
}

