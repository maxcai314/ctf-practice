#include <stdio.h>
void win() {
   puts("you win");
}

int main() {
   char buffer[16];
   gets(buffer);
   printf("You said: %s", buffer);
   return 0;
}
