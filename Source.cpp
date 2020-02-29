// Proyecto #1 Erik Fernando Martínez Martínez A01244818

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

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
		getline(archivo_ent, x);
		cout << x << endl;
		string cero = x.substr(0, 1); // nos regresa la letra E
		string uno = x.substr(2, 1);
		string dos = x.substr(4, 1);
		string tres = x.substr(6, 1);
		string cuatro = x.substr(8, 1);
		string cinco = x.substr(10, 1);
		string seis = x.substr(12, 1);
		string siete = x.substr(14, 1);
		string ocho = x.substr(16, 1);
		string nueve = x.substr(18, 1);
		string suma = x.substr(20, 1);
		string resta = x.substr(22, 1);
		string mult = x.substr(24, 1);
		string div = x.substr(26, 1);


		while (getline(archivo_ent, x)) {
			for (int i = 0; i < x.length(); i++) {
				if (x.substr(i, 1) == cero) {
					x.erase(i, 1);
					x.insert(i, "0");
				}
				else if (x.substr(i, 1) == uno) {
					x.erase(i, 1);
					x.insert(i, "1");
				}
				else if (x.substr(i, 1) == dos) {
					x.erase(i, 1);
					x.insert(i, "2");
				}
				else if (x.substr(i, 1) == tres) {
					x.erase(i, 1);
					x.insert(i, "3");
					float tres1;
				}
				else if (x.substr(i, 1) == cuatro) {
					x.erase(i, 1);
					x.insert(i, "4");
				}
				else if (x.substr(i, 1) == cinco) {
					x.erase(i, 1);
					x.insert(i, "5");
				}
				else if (x.substr(i, 1) == seis) {
					x.erase(i, 1);
					x.insert(i, "6");
				}
				else if (x.substr(i, 1) == siete) {
					x.erase(i, 1);
					x.insert(i, "7");
				}
				else if (x.substr(i, 1) == ocho) {
					x.erase(i, 1);
					x.insert(i, "8");
				}
				else if (x.substr(i, 1) == nueve) {
					x.erase(i, 1);
					x.insert(i, "9");
				}
				else if (x.substr(i, 1) == suma) {
					x.erase(i, 1);
					x.insert(i, "+");
				}
				else if (x.substr(i, 1) == resta) {
					x.erase(i, 1);
					x.insert(i, "-");
				}
				else if (x.substr(i, 1) == mult) {
					x.erase(i, 1);
					x.insert(i, "*");
				}
				else if (x.substr(i, 1) == div) {
					x.erase(i, 1);
					x.insert(i, "/");
				}

			}
			int num1, num2, resultado;

			if (x.find("+") != -1) {
				stringstream(x.substr(0, x.find("+") - 1)) >> num1;
				stringstream(x.substr(x.find("+") + 1)) >> num2;
				resultado = num1 + num2;
				string resultado_s = to_string(resultado);
				x.insert(x.length(), " = " + resultado_s);


			}
		    else if (x.find("-") != -1) {
				stringstream(x.substr(0, x.find("-") - 1)) >> num1;
				stringstream(x.substr(x.find("-") + 1)) >> num2;
				resultado = num1 - num2;
				string resultado_s = to_string(resultado);
				x.insert(x.length(), " = " + resultado_s);


			}
			if (x.find("*") != -1) {
				stringstream(x.substr(0, x.find("*") - 1)) >> num1;
				stringstream(x.substr(x.find("*") + 1)) >> num2;
				resultado = num1 * num2;
				string resultado_s = to_string(resultado);
				x.insert(x.length(), " = " + resultado_s);


			}
			if (x.find("/") != -1) {
				stringstream(x.substr(0, x.find("/") - 1)) >> num1;
				stringstream(x.substr(x.find("/") + 1)) >> num2;
				resultado = num1 / num2;
				string resultado_s = to_string(resultado);
				x.insert(x.length(), " = " + resultado_s);

			}
			cout << x << endl;
			//int y;
			//stringstream(x) >> y;

			//cout << "******" << endl;
			//cout << y + 1 << endl;

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