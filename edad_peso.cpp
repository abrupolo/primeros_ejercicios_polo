// edad_peso.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int NE; 
    NE = 0;
    int SE; 
    SE = 0;
    int SP;
    SP = 0; 
    int ME;
    int MP;
    int N;
    int E;
    int P;
    std::cout << "Ingrese la cantidad de estudiantes";
    std::cin >> N; 
    while (NE<N) {
        std::cout << "Ingrese la edad del estudiante";
        std::cin >> E;
        SE = SE + E;
        std::cout << "Ingrese el peso del estudiante";
        std::cin >> P;
        SP = SP + P;

        NE++;
    }
    ME = SE / N; 
    MP = SP / N; 
    std::cout << "La media de edad es; " << ME <<std::endl;
    std::cout << "La media del peso es: " << MP<<std::endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln