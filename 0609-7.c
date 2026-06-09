#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int N[6];
    srand(time(NULL));
    for(int i = 0; i < 6; i += 1)
        N[i] = rand() % 45 + 1;
    for(int i = 0; i < 6; i += 1)
        printf("%d\n", N[i]);
     return 0;
}

