#include <stdio.h>
int main(void)
{
    int N, key, i;
    printf("Input size of the array : ");
    scanf("%d", &N);

    int list[N];
    printf("Input %d integers : ", N);
    for (i = 0; i < N; i++)
       scanf("%d", &list[i]);
    printf("\nInput a key value : ");
    scanf("%d", &key);
    for(i = 0; i < N; i++)
       if(list[i] == key)
         printf("Find the key at %d of the list array\n", i + 1);
    printf("End\n");
    return 0;
}
