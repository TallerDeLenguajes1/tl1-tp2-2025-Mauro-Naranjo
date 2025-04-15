#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char * tipo_cpu;
}typedef compu;

void listarPcs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);

int main () {
    compu pcs[5];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    srand(time(NULL));
    //int aleatorio = minimo + rand() % (maximo - minimo + 1);
    for (int i = 0; i < 5; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % (2024 - 2015 + 1); 
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        int indice = rand() % 6;
        pcs[i].tipo_cpu = tipos[indice];

    }
    
}