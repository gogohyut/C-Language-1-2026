#include <stdio.h>

int add(int i, int n);
int main(void)
{
    int i;
    int n;
    int result;

    scanf("%d", &i);
    scanf("%d", &n);
    result = add(i, n);
    printf("%d + %d = %d", i, n, result);
    return 0;
}
int add(int i, int n)
{
    return i + n;
}
