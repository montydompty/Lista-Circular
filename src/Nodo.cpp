/*Montoya Rangel luis Rodrigo
Definici�n de los m�todos definidos en Nodo.h*/

#include "Nodo.h"

/*M�todo constructor, crea un nodo con un dato dado por el usuario y establece el siguiente nodo
@params: int, Nodo
@result: Nodo*/ 
Nodo::Nodo(int Dato , Nodo* Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
/*M�todo constructor, crea un nodo con un dato dado por el usuario
@params: int
@result: Nodo*/
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
/*Cambia el dato guardado en el nodo
@params: int
@result: Null*/
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
/*Establece cual sera el nodo siguiente al actual
@params: Nodo
@result: Null*/
void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
/*Obtiene el dato guardado en el nodo
@params: NULL
@result: int*/
int Nodo::getDato()
{
	return this->Dato;
}
/*obtiene el nodo siguiente al actual
@params: NULL
@result: Nodo*/
Nodo* Nodo::getSig()
{
	return this->Sig;
}
