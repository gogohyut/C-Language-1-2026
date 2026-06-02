#include <stdio.h>
int main(void) {
   int arr[9];
   for (int i = 0; i < 9; i++) {
       arr[i] = i + 1;
       printf("%d", arr[i]);
    }
   printf("\n");
   return 0;
}
