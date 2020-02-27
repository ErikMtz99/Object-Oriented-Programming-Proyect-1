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
	cout << "Ingrese nombre del archivo de salida (Poner .txt al final porfavor) : " << endl;
	cin >> nombre_salida;

	archivo_sal.open(nombre_salida);

	if (nombre_entrada == "Operaciones.txt") {
		archivo_ent.open("Operaciones.txt");

		string x;
		while (getline(archivo_ent,x)) {
			cout << x << endl;
		}
	}
	else {
		cout << "No existe el archivo de entrada." << endl;
	}

	cout << "Se ha creado el archivo con nombre: " << nombre_salida << endl;
	archivo_sal.close();
	archivo_ent.close();
	return 0;
}