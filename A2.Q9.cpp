#include <stdio.h>

int main() {
   int arr[100];
   int size, i, j, temp;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size; j++) {
         if (arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   printf("Sorted array in descending order: ");
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}
