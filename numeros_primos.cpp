// numeros_primos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int n;
    int i;
    int j;
    int resto;
    
    for (i = 1; i <= n; i++) {
        std::cout << "Ingrese la cantidad de numeros";
        std::cin >> n;
        resto = 0;
        for (j = 1; j < n; j++) {
            if (n % i == 0) {
                resto = resto + 1;
            }
        }
        if (resto == 2) {
            std::cout << "Es un numero primo"<< endl;
        }
        else {
            std::cout << "No es numero primo"<< endl;
        }
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
