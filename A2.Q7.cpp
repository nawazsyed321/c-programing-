#include <stdio.h>

int main() {
   int arr[100], reverse_arr[100];
   int size, i, j;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Original array: ");
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }

   for (i = size - 1, j = 0; i >= 0; i--, j++) {
      reverse_arr[j] = arr[i];
   }

   printf("\nReversed array: ");
   for (i = 0; i < size; i++) {
      printf("%d ", reverse_arr[i]);
   }

   return 0;
}
