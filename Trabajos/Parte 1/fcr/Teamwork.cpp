#include <iostream>

using std::cout;
using std::cin;
using std::endl;

extern "C" bool IsValidAssembly(int a, int b, int c);

void StringControl(char chain1[20], char chain2[20]) {
	if (!(strlen(chain1) >= 6 && chain1[5] == chain1[3])) {
		std::cout << "Hubo algun fallo";
		exit(0);
	}
	const char chainComprobar[] = "gQ0xiXYj";
	if (strcmp(chain2, chainComprobar) != 0) {
		std::cout << "Algo salio mal";
		exit(0);
	}


}


void checkAssemblyAcess(signed int a, signed int b, signed int c) {
	unsigned int result = IsValidAssembly(a, b, c);
	if (result == 0) {
		cout << "No tienes acceso aqui" << endl;
		exit(0);
	}
}

unsigned int* ConversorBinario(unsigned int numero) {
	unsigned int vector[32] = { 0 };
	for (unsigned int i = 0; numero != 0; i++) {
		if (numero % 2 != 0) {
			vector[i] = 1;
		}
		numero = numero / 2;
	}
	return vector;
}

void BitControl()
{
	cout << "Introduzca dos numeros de 32 bits" << endl;
	unsigned int binario1;
	cin >> binario1;
	unsigned int binario2;
	cin >> binario2;

	unsigned int* vector1 = ConversorBinario(binario1);
	unsigned int* vector2 = ConversorBinario(binario2);

	if (vector1[0] != 1) {
		cout << "El acceso no fue correcto" << endl;
		exit(0);
	}

	if (vector1[20] != vector2[22])
	{
		cout << "Hubo algun fallo" << endl;
		exit(0);
	}

	unsigned int* vector_final = vector2;
	for (int i = 0; i < 21; i++)
	{
		vector_final[i] = vector1[i];
	}
	unsigned int* aux = ConversorBinario(11456);
	if (vector_final < aux)
	{
		cout << "Estos no son los androides que buscais" << endl;
	}
}

void ControlWithVector() {
	unsigned long long binario1;
	unsigned long long binario2;
	unsigned long long binario3;
	cout << "Introduzca tres numeros de 64 bits" << endl;
	cin >> binario1;
	cin >> binario2;
	cin >> binario3;
	unsigned long long vector[] = { binario1, binario2, binario3 };
	if ((binario1 ^ binario2 ^ binario3) != 240) {
		cout << "Algo salio mal" << endl;
		exit(0);
	}
}


int main()
{

	char char1[20];
	char char2[20];
	cout << "Introducir char1 " << endl;
	cin >> char1;
	cout << "Introducir char2 " << endl;
	cin >> char2;
	StringControl(char1, char2);


	unsigned int validAccess1;
	unsigned int validAccess2;
	unsigned int validAccess3;
	cout << "Introducir numero1 de 32 bits" << endl;
	cin >> validAccess1;
	cout << "Introducir numero2 de 32 bits" << endl;
	cin >> validAccess2;
	cout << "Introducir numero3 de 32 bits" << endl;
	cin >> validAccess3;
	checkAssemblyAcess(validAccess1, validAccess2, validAccess3);

	BitControl();

	ControlWithVector();
	return 0;
}
