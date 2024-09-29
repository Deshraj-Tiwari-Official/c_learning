#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n]; // This is not the way to allocate memory and this is not even allowed in C anyways.

  // NOTE: Malloc (Used for dynamic memory allocation)
  int *ptr = (int *)malloc(n * sizeof(int)); // Bytes taken by integer in memory x how many integers we want to allocate
  for (int i = 0; i < n; i++) {
    printf("Enter the element at index %d: ", i);
    scanf("%d", &arr[i]);
    ptr[i] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", ptr[i]);
  }

  // NOTE: Free (Used to free memory)
  free(ptr);

  // NOTE: Calloc (Used for dynamic memory allocation)
  // Difference between malloc and calloc is calloc initializes the memory to zero while malloc allocates a garbage value.

  // NOTE: Realloc (Used for dynamic memory reallocation)
  // Checkout yourself.
  return 0;
}
