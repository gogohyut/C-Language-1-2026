#include <stdio.h>
int add(int j, int i) 
{
    j = j + i;                           
    printf("The sum(0:%d) = %d\n", i, j);
    
    return j; 
}
int main(void)
{
    int i, j;
    for(i = 0, j = 0; i <= 10; i++)
    {
        j = add(j, i); 
    }
    return 0;
}
