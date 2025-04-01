#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{
        int i,j;
        double mt[N][M], *p;
        p = &mt[0][0];

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
            {
                *(p + (i * M + j)) = 1 + rand() % 100;
                printf("%f    ", *(p + (i * M + j)));
                // *p++;
            }
            printf("\n");
        }
    
    return 0;
}

