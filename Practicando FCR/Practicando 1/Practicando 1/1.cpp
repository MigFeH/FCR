#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void cambiaNegativos(int v[], int longV)
{
	unsigned int i;
	for (i = 0; i < longV; i++)
	{
		if (v[i] < 0)
		{
			v[i] = 0;
		}
	}
}

void imprimeVector(char nombre[],int v[], int longV)
{
	cout << nombre << ": ";

	unsigned int i;
	for (i = 0; i < longV; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int cuentaLetras(char nombre[], char cad[], int longCad)
{
	unsigned int vocales = 0;
	unsigned int consonantes = 0;

	unsigned int i;
	for (i = 0; i < longCad; i++)
	{
		if (cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u')
		{
			vocales++;
		}
		else if (cad[i] != 'a' && cad[i] != 'e' && cad[i] != 'i' && cad[i] != 'o' && cad[i] != 'u' && cad[i] != '\0')
		{
			consonantes++;
		}
	}
	cout << nombre << ":  " << "Vocales: " << vocales << "  " << "Consonantes: " << consonantes << endl;
	return 0;
}

int main()
{
	//cout << "Hello World!" << endl;
	//cout << "Integer: " << 3 << " Floating-point: " << 4.5 << endl;

	//int i;
	//cout << "Input an integer: ";
	//cin >> i; // lo que se ponga en la consola tras la ejecucción del cout será el valor de i que lo toma con cin 
	//cout << "Valor de i: " << i << endl;


	// Crea un programa que defina dos vectores de 6 enteros. Inicialízalos con valores cualquiera, la mitad positivos y la mitad negativos.
	// El programa debe contener una función que reciba un vector de enteros y su longitud y ponga a cero los elementos negativos.
	// El programa principal debe llamar a esta función para los dos vectores.
	// Deben imprimirse los vectores antes y después de modificarlos.

	//const unsigned int longVectores = 6;

	//int vector1[] = { -2, -6, -7, 4, 5, 3 };
	//int vector2[] = { -7, -5, -6, 4, 5, 9 };

	//char nombreVector1[] = "vector1";
	//char nombreVector2[] = "vector2";


	//imprimeVector(nombreVector1, vector1, longVectores);
	//imprimeVector(nombreVector2, vector2, longVectores);
	//cout << endl;

	//cambiaNegativos(vector1, longVectores);
	//cambiaNegativos(vector2, longVectores);

	//imprimeVector(nombreVector1, vector1, longVectores);
	//imprimeVector(nombreVector2, vector2, longVectores);


	// Crea un programa que defina dos cadenas e imprima el número de vocales y el número de consonantes que tienen.
	// Para ello debe utilizar una función que realice el cálculo.

	char cad1[] = "Buenos dias";
	char cad2[] = "Malas noches";

	char nombreCad1[] = "Cad1";
	char nombreCad2[] = "Cad2";

	const unsigned int longCad1 = 12;
	const unsigned int longCad2 = 13;

	cuentaLetras(nombreCad1, cad1, longCad1);
	cuentaLetras(nombreCad2, cad2, longCad2);

	return 0;
}