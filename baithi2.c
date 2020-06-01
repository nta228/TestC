#include <stdio.h>
#include <string.h>
int main() {
   char string[1000];
  
   printf("\nEnter string:");
   gets(string);
  
   strlwr(string);
   printf("\nUpper case: %s", string);
  
   return (0);
}
