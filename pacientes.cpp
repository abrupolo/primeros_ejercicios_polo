// pacientes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    std::cout << "Ingrese la cantidad de pacientes";
    std::cin >> N; 
    int CM; 
    CM = 0; 
    int CF;
    CF = 0;
    int TP;
    TP = 0;
    int PM;
    int PF;
    while (TP<N) {
        std::cout << "Ingrese el sexo del paciente (m,f)";
        std::cin >> S;
        if (S == "m" o "M")  {
            CM= CM++
        }
        else if (S== "f" o "F") {
            CF= CF++
            }
        TP++
    }
    PM = CM / N * 100;
    std::cout << "El porcentaje de los pacientes masculinos es: ", PM;
    PF = CF / N * 100;
    std::cout << "El porcentaje de los pacientes femeninos es: ", PF;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
