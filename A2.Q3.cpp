#include <stdio.h>

int main() {
   int arr[100], size, i, largest1, largest2, smallest1, smallest2;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   largest1 = arr[0];
   largest2 = arr[1];
   smallest1 = arr[0];
   smallest2 = arr[1];

   for (i = 1; i < size; i++) {
      if (arr[i] > largest1) {
         largest2 = largest1;
         largest1 = arr[i];
      } else if (arr[i] > largest2 && arr[i] != largest1) {
         largest2 = arr[i];
      }
      
      if (arr[i] < smallest1) {
         smallest2 = smallest1;
         smallest1 = arr[i];
      } else if (arr[i] < smallest2 && arr[i] != smallest1) {
         smallest2 = arr[i];
      }
   }

   printf("The second largest element in the array is %d\n", largest2);
   printf("The second smallest element in the array is %d\n", smallest2);

   return 0;
}
