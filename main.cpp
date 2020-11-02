#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
	ArregloDinamico<string> arreglo;
	
	
    arreglo.insertar_final("Mensaje2");
    arreglo.insertar_final("Mensaje3");
    arreglo.insertar_final("Mensaje4");
    arreglo.insertar_inicio("Mensaje1");
    
    arreglo.insertar("Mensaje100",2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
	
for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
	
	
	return 0;
}
