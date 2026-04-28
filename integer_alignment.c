#include <stdio.h>
int main(void)
{
    int a = 123;
    printf("===%6d===\n", a);
    printf("===%-6d===\n", a);
    printf("===%06d===\n", a);
    printf("===%-06d===\n", a);
    return 0;
}