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
    int cantidad = 5;
    compu pcs[cantidad];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
    srand(time(NULL));
    // aleatorio = minimo + rand() % (maximo - minimo + 1);
    for (int i = 0; i < cantidad; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % (2024 - 2015 + 1); 
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        int indice = rand() % 6;
        pcs[i].tipo_cpu = tipos[indice];
        
    }

    listarPcs(pcs, cantidad);
    
    return 0;
}

void listarPcs(compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("La computadora numero %d tiene:\n", i+1);
        printf("Velocidad de procesamiento en GHz: %d\n", pcs[i].velocidad);
        printf("Anio de fabricacion: %d\n", pcs[i].anio);
        printf("Cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos
        );
        printf("Tipo de procesador: %s\n", pcs[i].tipo_cpu);
        printf("\n");
    }
    
}
