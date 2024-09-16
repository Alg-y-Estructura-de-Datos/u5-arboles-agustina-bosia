#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"
/*  Problema: En una tienda de electrónica, cada producto tiene un código único y quieres
gestionar el inventario. A medida que entran y salen productos, es necesario mantener el
sistema actualizado.
    ● Tarea: Inserta los productos con los siguientes códigos: 4001, 2002, 6003, 1500,
3500, 5000, 7000.
    ● Desafío: Un cliente compró los productos con códigos 2002 y 6003, así que
elimínalos del sistema. Luego, un nuevo producto con el código 2500 llega al
inventario. Imprime el inventario actualizado y verifica si el código 4001 todavía está
en el sistema.
*/

int main() {

    ArbolBinario<int> arbol;

    int array[7]={4001,2002,6003,1500,3500,5000,7000};

    for(int i=0;i<7;i++){
        arbol.put(array[i]);
    }

    arbol.remove(2002);
    arbol.remove(6003);
    arbol.put(2500);

    cout << "Inventario actualizado:" << endl;
    arbol.print();
    try {
        int libro = arbol.search(4001);
        cout << "El artículo 4001 sigue en inventario " <<endl;
    } catch (int e) {
        if (e == 404) {
            cout << "El artículo 4001 no sigue en inventario" << endl;
        }
    }
    
    return 0;
}
