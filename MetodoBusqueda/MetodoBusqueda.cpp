#include <iostream>

using namespace std;

bool EstaElemento(int elementos[], int elementoBuscado, int tam)
{
    bool encontrado = false;//paso 0
    
    for (int i = 0; i < tam; i++) //paso 2
    {
        if (elementoBuscado == elementos[i])
        {
            encontrado = true;
            break;
        }
    }
    return encontrado;
}

bool PosicionDelElemento(int elementos[], int elementoBuscado, int tam)
{
    int indice = -1;    

    for (int i = 0; i < tam; i++) //paso 2
    {
        if (elementoBuscado == elementos[i])
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int main()
{
    int elementos[] = {6,4,5,2,1,3};
    int elementoBuscado = 5;
    int tam = sizeof(elementos) / sizeof(elementos[0]);
    
    if (EstaElemento(elementos, elementoBuscado, tam))
        cout << "Elemento encontrado" << endl;
    else
        cout << "Elemento NO encontrado" << endl;

    int posicion = PosicionDelElemento(elementos, elementoBuscado, tam);
    if (posicion >= 0)
        cout << "Elemento encontrado en la posición: "<<posicion << endl;
    else
        cout << "Elemento NO encontrado" << endl;

}
