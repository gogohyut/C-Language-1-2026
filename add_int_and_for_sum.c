#include <stdio.h>
int add(int i, int n);
int main(void)
{
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    for(; i <= 10; i++)
    {
        j = add(j, i);
        printf("The sum(0:%d) = %d\n", i ,j);
    }
    return 0;
}
int add(int i, int n)
{
    return i + n;
}
