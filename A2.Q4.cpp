#include <stdio.h>

int main() {
   int arr[100], size, i, max_diff;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   max_diff = arr[1] - arr[0];

   for (i = 0; i < size; i++) {
      int j;
      for (j = i + 1; j < size; j++) {
         if (arr[j] - arr[i] > max_diff) {
            max_diff = arr[j] - arr[i];
         }
      }
   }

   printf("The maximum difference between two elements in the array is %d\n", max_diff);

   return 0;
}
