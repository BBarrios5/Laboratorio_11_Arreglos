#include <iostream>
using namespace std;

// Constante para el tamaño de los arreglos
const int TAM = 15;

// Funciones estadísticas
int suma(int arr[], int tam);
float promedio(int arr[], int tam);
int maximo(int arr[], int tam);
int minimo(int arr[], int tam);
void contarParesImpares(int arr[], int tam, int& pares, int& impares);

// Función para imprimir un arreglo
void imprimirArreglo(int arr[], int tam);

// Función para imprimir en orden inverso usando punteros
void imprimirInverso(int* arr, int tam);

// Función para filtrar elementos mayores al promedio
int filtrarMayoresAlPromedio(int arr[], int tam, float prom, int nuevo[]);

int main() {
    int arreglo[TAM];

    // Parte 1: Llenar con valores del 1 al 10 y mostrar índices
    cout << "Parte 1: Valores secuenciales del 1 al 10:\n";
    for (int i = 0; i < 10; i++) {
        arreglo[i] = i + 1;
        cout << "Indice " << i << ": " << arreglo[i] << endl;
    }

    // Parte 2: Ingreso de valores y estadísticas
    cout << "\nParte 2: Ingrese 10 numeros enteros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int sumaTotal = suma(arreglo, 10);
    float prom = promedio(arreglo, 10);
    int max = maximo(arreglo, 10);
    int min = minimo(arreglo, 10);
    int pares = 0, impares = 0;
    contarParesImpares(arreglo, 10, pares, impares);

    cout << "\nEstadisticas:\n";
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Maximo: " << max << ", Minimo: " << min << endl;
    cout << "Pares: " << pares << ", Impares: " << impares << endl;

    // Parte 3: Imprimir en orden inverso con punteros
    cout << "\nParte 3: Arreglo en orden inverso usando punteros:\n";
    imprimirInverso(arreglo, 10);

    // Parte 4: Filtro por promedio
    cout << "\n\nParte 4: Ingrese 15 numeros para el reto final:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    float promedioFinal = promedio(arreglo, TAM);
    int mayores[TAM];
    int cantidadMayores = filtrarMayoresAlPromedio(arreglo, TAM, promedioFinal, mayores);

    cout << "\nArreglo original:\n";
    imprimirArreglo(arreglo, TAM);

    cout << "\nPromedio: " << promedioFinal << endl;
    cout << "Valores mayores al promedio:\n";
    imprimirArreglo(mayores, cantidadMayores);

    return 0;
}

// Funciones auxiliares

int suma(int arr[], int tam) {
    int total = 0;
    for (int i = 0; i < tam; i++) {
        total += arr[i];
    }
    return total;
}

float promedio(int arr[], int tam) {
    return (float)suma(arr, tam) / tam;
}

int maximo(int arr[], int tam) {
    int max = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int minimo(int arr[], int tam) {
    int min = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

void contarParesImpares(int arr[], int tam, int& pares, int& impares) {
    for (int i = 0; i < tam; i++) {
        if (arr[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
}

void imprimirArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void imprimirInverso(int* arr, int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int filtrarMayoresAlPromedio(int arr[], int tam, float prom, int nuevo[]) {
    int index = 0;
    for (int i = 0; i < tam; i++) {
        if (arr[i] > prom) {
            nuevo[index++] = arr[i];
        }
    }
    return index;
}
