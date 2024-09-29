#include <stdio.h>
int main() {
  FILE *file_pointer;
  file_pointer = fopen("written_by_me.txt", "r");
  if (file_pointer == NULL) {
    printf("The file does not exist. Or could not be opened.\n");
    return 1;
  } else {
    int num;
    fscanf(file_pointer, "%d", &num);
    printf("The number is %d\n", num);
    fscanf(file_pointer, "%d", &num);
    printf("The number is %d\n", num);
  }
  fclose(file_pointer);
  return 0;
}
