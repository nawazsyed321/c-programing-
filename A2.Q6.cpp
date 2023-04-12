#include <stdio.h>

int main() {
   int arr[100], even_arr[100], odd_arr[100];
   int size, i, even_count = 0, odd_count = 0;

   printf("Enter the size of the array: ");
   scanf("%d", &size);

   printf("Enter %d elements in the array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < size; i++) {
      if (arr[i] % 2 == 0) {
         even_arr[even_count] = arr[i];
         even_count++;
      } else {
         odd_arr[odd_count] = arr[i];
         odd_count++;
      }
   }

   printf("Even elements of the array: ");
   for (i = 0; i < even_count; i++) {
      printf("%d ", even_arr[i]);
   }

   printf("\nOdd elements of the array: ");
   for (i = 0; i < odd_count; i++) {
      printf("%d ", odd_arr[i]);
   }

   return 0;
}
