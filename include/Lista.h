/*Montoya Rangel luis Rodrigo
Clase lista circular con atributos y métodos*/

#include "Nodo.h"

class Lista
{
public:
	//nodos sentinela
	Nodo* H;
	Nodo* T;
	//constructores	
	Lista();
	Lista(int Dato);
	//metodos
	bool ListaVacia();
	void AddInicio(int Dato);
	void AddFinal(int Dato);
	void AddRef(int Dato, int Ref);
	int RemoveInicio();
	int RemoveFinal();
	Nodo * RemoveRef(int Ref);
	void VaciarLista();
	Nodo* BuscarElemento(int Dato);
	void Show();
};
