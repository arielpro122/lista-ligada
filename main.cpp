//Ariel Humberto Valle Escoto, 08 de diciembre del 2021
#include <iostream>
#include "listaligada.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	listaligada<int> lista;
	
	lista.push_front(8);
	lista.push_front(20);
	lista.push_front(430);
	
	lista.push_back(10);
	lista.push_back(9);
	
	lista.print();
	
	cout << "Primer tamano: " << lista.size() << endl;
	
	lista.pop_back();
	
	cout << "Segundo tamano: "<< lista.size() << endl << endl;
	lista.print();
	
	lista.~listaligada();
	cout << endl << "Ultimo tamano: "<< lista.size() << endl;
	
	
	return 0;
}
