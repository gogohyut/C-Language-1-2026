#include <stdio.h>
int max(int c, int d);

int main(void) 
{ 
    int a, b;
    int result; 
    scanf("%d %d", &a, &b); 
    result = max(a, b); 
    printf("%d\n", result);
    return 0;
}
int max(int c, int d) 
{
    if (c > d) {
        return c;
    } else {
        return d;
    }
}
