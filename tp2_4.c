#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct compu
{
    int velocidad; //Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; //Año de fabricacion (valor entre 2015 y 2024)
    int cantidad_nucleos; //Cantidad de nucles (valor entre 1 y 8)
    char *tipo_cpu; //Tipo de procesador (apuntador a cadena de caracteres)
};

void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main()
{
    srand(time(NULL));
    int i;
    struct compu computadoras[5], *p;
    p = &computadoras[0];

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    for (i = 0; i < 5; i++)
    {
        p->velocidad = rand()%(3-1+1)+1;
        p->anio = rand()%(2024-2015+1)+2015;
        p->cantidad_nucleos = rand()%(8-1+1)+1;
        p->tipo_cpu = tipos[rand()%(6-1+1)+1];
        *p++;
    }
    
    listarPCs(computadoras,5);
    mostrarMasVieja(computadoras,5);
    mostrarMasVeloz(computadoras,5);
    
    return 0;
}

void listarPCs(struct compu pcs[], int cantidad){
    printf("******* LISTADO DE PCs ******** \n");
    for ( int j = 0; j < cantidad; j++)
    {
        printf("PC nro %d\n", j);
        printf("Velocidad: %d\n", pcs[j].velocidad);
        printf("Año: %d\n", pcs[j].anio);
        printf("Cantidad de nucleos: %d\n", pcs[j].cantidad_nucleos);
        printf("Tipo de procesador: %s\n", pcs[j].tipo_cpu);
        printf("-------------------\n");
    }
    printf("\n");
}

void mostrarMasVieja(struct compu pcs[], int cantidad){
    int posicionMasVieja = 0,k;
    for (k = 0; k < cantidad; k++)
    {
        if (pcs[k].anio < pcs[k+1].anio)
        {
            posicionMasVieja = k;
        }
    }
    printf("************ PC más vieja ************* \n");
    printf("PC nro %d\n", posicionMasVieja);
    printf("Velocidad: %d\n", pcs[posicionMasVieja].velocidad);
    printf("Año: %d\n", pcs[posicionMasVieja].anio);
    printf("Cantidad de nucleos: %d\n", pcs[posicionMasVieja].cantidad_nucleos);
    printf("Tipo de procesador: %s\n", pcs[posicionMasVieja].tipo_cpu);
    printf("-------------------\n");
}   

void mostrarMasVeloz(struct compu pcs[], int cantidad){
    int posicionMasVeloz = 0, l;
    for ( l = 0; l < cantidad; l++)
    {
        if (pcs[l].velocidad > pcs[l+1].velocidad)
        {
            posicionMasVeloz = l;
        }
    }
    printf("************ PC más veloz ************* \n");
    printf("PC nro %d\n", posicionMasVeloz);
    printf("Velocidad: %d\n", pcs[posicionMasVeloz].velocidad);
    printf("Año: %d\n", pcs[posicionMasVeloz].anio);
    printf("Cantidad de nucleos: %d\n", pcs[posicionMasVeloz].cantidad_nucleos);
    printf("Tipo de procesador: %s\n", pcs[posicionMasVeloz].tipo_cpu);
    printf("-------------------\n");
}