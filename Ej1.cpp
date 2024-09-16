#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;
/*  Problema: Estás organizando una biblioteca familiar. Cada libro tiene un número único de
identificación (ID) y quieres organizar los libros en un sistema que te permita agregarlos,
eliminarlos y buscarlos fácilmente.
    ● Tarea: Inserta los libros con los siguientes IDs en el sistema de gestión (árbol): 101,
52, 198, 36, 75, 150, 200.
    ● Desafío: Busca el libro con el ID 75 y verifica si está en la biblioteca. Luego elimina
el libro con el ID 52 porque fue prestado. Imprime la estructura del sistema después
de la eliminación.
*/

int main() {
    ArbolBinario<int> arbol;
    cout << "Ejercicio N° 1" << endl;
    int array[7]={101, 52, 198, 36, 75, 150, 200};

    for(int i=0;i<7;i++){
        arbol.put(array[i]);
    }

    arbol.search(52);

    
    return 0;
}
