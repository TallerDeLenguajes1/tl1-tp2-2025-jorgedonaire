#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
        int i;
        double vt[N], *p;
        p = &vt[0];

        for (i = 0; i < N; i++)
        {
            *p = 1 + rand() % 100;
            printf("%f\n", *p);
            *p++;
            
        }
    
    return 0;
}

