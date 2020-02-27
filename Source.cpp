// Proyecto #1 Erik Fernando Martínez Martínez A01244818

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string nombre_entrada, nombre_salida;
	ifstream archivo_ent;
	ofstream archivo_sal;

	cout << "Ingrese nombre del archivo de entrada: " << endl;
	cin >> nombre_entrada;
	cout << "Ingrese nombre del archivo de salida: " << endl;
	cin >> nombre_salida;

	if (nombre_entrada == "Operaciones.txt") {
		archivo_ent.open("Operaciones.txt");
	}
	else {
		cout << "No existe el archivo." << endl;
	}

	archivo_sal.open(nombre_salida);
	archivo_ent.close();
	return 0;
}