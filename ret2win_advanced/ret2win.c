#include <stdio.h>
void win() {
  puts("you win");
}

int main() {
  printf("funny number: %p\n", main); // pointer leak
  char buffer[16];
  gets(buffer);
  printf("You said: %s\n", buffer);
  return 0;
}
