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
    
    return 0;
}

