#include <stdio.h>

int main() {
   int arr[100], size, i, j, k;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < size; k++) {
               arr[k] = arr[k + 1];
            }
            size--;
         } else {
            j++;
         }
      }
   }

   printf("Array after removing duplicate elements: ");
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}
