/*Montoya Rangel luis Rodrigo
Método principal de la lista*/

#include "Lista.h"

int main()
{
	/*Main que utiliza el constructor de lista para crear una lista vacia y probar su funcionamineto*/
	Lista l = Lista();
	l.AddInicio(2);	
	l.AddInicio(3);
	l.AddFinal(4);
	l.AddInicio(5);
	l.AddRef(8,5);
	l.RemoveInicio();
	l.RemoveFinal();
	l.AddRef(9,6);
	l.BuscarElemento(2);
	l.RemoveRef(3);
	l.Show();
	l.VaciarLista();
	l.Show();	
	return 0;
}
