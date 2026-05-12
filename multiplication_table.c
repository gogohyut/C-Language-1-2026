#include <stdio.h>
int main (void)
{
    int i,j;
    while(j ==1)
        {
            printf("Enter your dan : ");
            scanf("%d", &i);
            if(i == 0) {
                j =0;
            }
            for(int i = 1; i <= 9; i++);
            printf("%d * %d = %d\n", i, j, i * j);
        }
    return 0;
}
