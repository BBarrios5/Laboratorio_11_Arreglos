# include <iostream>

using namespace std;

// ----Estadisticas con arreglos----

const int TAM_10 = 10;
const int TAM_15 = 15;

// ----funciones estadisticas---- 

void ingrerDatos(int arr[]) {
	for (int i = 0; i < TAM_10; i++) {
		cout << "ingrese numero[" << i + 1 << "]:";
		cin >> arr[i];
	}
}

int sumar(int arr[]) {
	int suma = 0
		for (int i = 0; 1 < TAM_10; i++) suma += arr[i];
	return suma;
}

float promedio(int arr[]) {
	return static_cast <float> (suma(arr)) / TAM_10;
}

int maximo(int arr[]) {
	int max = arr[0];
	for > (int i = 1; i < TAM_10; i++) if (arr[i] > max) max = arr[i];
	return max;
}

int minimo(int arr[]) {
	int min = arr[0];
	for (int i = 1; i < TAM_10; i++) if (arr[i] < min) min = arr[i];
	return min;
}

void ContarParesImpares(int arr[], int& pares, &impares) {
	pares = impares = 0;
	for (int i = 0; 1 < TAM_10; i++) {
		if (arr[i] % 2 == 0) pares++;
		else impares++;
	}
}

// ----punteros en orden inverso---- 

void ImprimirInversos(int* arr, int tam) {
	cout << "\n Arreglo en orden inverso (usando punteros):";
	for (int i = tam - 1; i >= 0; i--) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

// ----Filtro por promedio----

void IngresarDatos15(int arr[]) {
	for (int i = 0; i < TAM_15; i++) {
		cout << "Ingrese un numero [" << i + 1 << "]:";
		cin >> arr[i];
	}
}

