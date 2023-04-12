#include <stdio.h>

int main() {
   int arr[100];
   int size, i, j, count;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < size; i++) {
      count = 1;
      for (j = i + 1; j < size; j++) {
         if (arr[i] == arr[j]) {
            count++;
            arr[j] = 0;
         }
      }
      if (arr[i] != 0) {
         printf("%d occurs %d times\n", arr[i], count);
      }
   }

   return 0;
}
