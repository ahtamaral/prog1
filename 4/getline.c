#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("Please enter a line:\n");
  char *line = NULL;
  size_t len = 0;
  size_t lineSize = 0;

  while (lineSize = getline(&line, &len, stdin) != -1) {
    printf("%s", line);
  }

  return 0;
}