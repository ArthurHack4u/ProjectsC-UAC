#include <iostream>
#include <cmath>

// Función para calcular el factorial
int calcularFactorial(int n) {
    if (n < 0) {
        return -1;  // Valor para indicar un error
    }

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

// Función para calcular la potencia
double calcularPotencia(double base, int exponente) {
    return pow(base, exponente);
}

// Función para calcular la raíz cuarta
double calcularRaizCuarta(double numero) {
    return pow(numero, 0.25);
}

int main() {
    int opcion;
    do {
        std::cout << "Menú de opciones:" << std::endl;
        std::cout << "1. Calcular Factorial" << std::endl;
        std::cout << "2. Calcular Potencia" << std::endl;
        std::cout << "3. Calcular Raíz Cuarta" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                std::cout << "Ingrese un número para calcular el factorial: ";
                std::cin >> numero;

                int resultado = calcularFactorial(numero);

                if (resultado == -1) {
                    std::cout << "Error: No se puede calcular el factorial de un número negativo." << std::endl;
                } else {
                    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;
                }
                break;
            }

            case 2: {
                double base;
                int exponente;
                std::cout << "Ingrese la base: ";
                std::cin >> base;
                std::cout << "Ingrese el exponente: ";
                std::cin >> exponente;

                double resultado = calcularPotencia(base, exponente);
                std::cout << base << " elevado a la " << exponente << " es: " << resultado << std::endl;
                break;
            }

            case 3: {
                double numero;
                std::cout << "Ingrese un número para calcular la raíz cuarta: ";
                std::cin >> numero;

                double resultado = calcularRaizCuarta(numero);
                std::cout << "La raíz cuarta de " << numero << " es: " << resultado << std::endl;
                break;
            }

            case 4:
                std::cout << "Saliendo del programa." << std::endl;
                break;

            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    } while (opcion != 4);

    return 0;
}
