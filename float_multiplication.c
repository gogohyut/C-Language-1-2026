#include <stdio.h>
int main(void)
{
    float num1, num2;
    printf("Enter the first float value : \n");
    scanf("%.2f", num1);
    printf("Enter the second float value : \n");
    scanf("%.2f", num2);
    printf("Multiplication of two float value is %.2f\n", num1 * num2);
    return 0;
}