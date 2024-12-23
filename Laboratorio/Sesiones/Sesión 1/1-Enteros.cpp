#include <iostream>
using namespace std;

int main()
{
	signed int a;
	signed int b;

	cout << "Input an integer: ";
	cin >> a;

	cout << "Input another integer: ";
	cin >> b;

	signed int c = a + b;
	unsigned int d = a / 2 + b / 2;

	if (a >= 0 && b >= 0 && c < 0)
	{
		cout << "Desbordamiento detectado" << endl;
	}
	else if (a < 0 && b < 0 && c >= 0)
	{
		cout << "Desbordamiento detectato" << endl;
	}
	else
	{
		cout << "Valor de la suma: " << c << endl;
	}
	cout << "Valor de la media entre " << a << " y " << b << ": " << d << endl;


	// Crea un programa que realice la suma acumulada de todos los números entre 1 y un millón que son múltiplos de 3.
	// Para acumular la suma, utiliza variables de los siguientes tipos : int(entero de 32 bits), short(entero de 16 bits) y long long(entero de 64 bits).
	// Compara y analiza los resultados.
	unsigned int i;
	signed int suma = 0;
	for (i = 1; i < 1000001; i++)
	{
		if (i / 3 == 3)
		{
			suma = suma + i;
		}
	}

	cout << "Suma acumulada: " << suma << endl;

	// Crea un programa que lea por pantalla dos números enteros e imprima su diferencia.
	// En caso de que dicha operación aritmética produzca un desbordamiento imprime un mensaje de error indicándolo.
	signed int x;
	signed int y;

	cout << "Input an integer: ";
	cin >> x;

	cout << "Input another integer: ";
	cin >> y;

	int resta = x - y;

	if (x >= 0 && y >= 0 && resta < 0)
	{
		cout << "Desbordamiento detectado" << endl;
	}
	else if (x < 0 && y < 0 && resta >= 0)
	{
		cout << "Desbordamiento detectato" << endl;
	}
	else
	{
		cout << "Valor de la resta: " << resta << endl;

	return 0;
}
