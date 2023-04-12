#include <stdio.h>

int main() {
   int arr[100], size, i, largest1, largest2;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   largest1 = arr[0];
   largest2 = arr[1];

   for (i = 1; i < size; i++) {
      if (arr[i] > largest1) {
         largest2 = largest1;
         largest1 = arr[i];
      } else if (arr[i] > largest2 && arr[i] != largest1) {
         largest2 = arr[i];
      }
   }

   printf("The largest two elements in the array are %d and %d\n", largest1, largest2);

   return 0;
}
