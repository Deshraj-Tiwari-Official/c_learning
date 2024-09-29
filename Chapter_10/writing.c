#include <stdio.h>
int main() {
  FILE *fp;
  // NOTE: When you write a file, it will be overwritten. To append to a file, use "a" instead of "w". (see appending.c)
  fp = fopen("written_by_C.txt", "w");
  fprintf(fp, "Ayo, I did not write this. THE FUCK.\n");
  fclose(fp);
  return 0;
}
