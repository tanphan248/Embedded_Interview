#include <stdio.h>
#include <stdlib.h>

uint8_t sizeString (char string[]) {
       uint_t count = 0;
       while (*string != '\0') {
             if (*string == ' ')    count++;
             string++;
       }
       return count;
}

void reverseString(char string[]) {
      uint8_t size = sizeString(string);

      char *arr[size];

      uint8_t index = 0;
      arr[index] = string;

      while (*string != '\0') {
             if (*string == ' ') {
                       string++;
                       index++;
                       arr[index] = string;
              }
              else string++;
      }

     for (uint8_t i = 0; i < sizeString(string); i--) {
             while (*arr[i] != '\0' && *arr[i] != ' ')  {
                       printf("%c", *arr[i]);
                       arr[i]++;
             }
             printf(" ");
      }
}

int main() {

      char string[] = "nhat hoang tuan nhat tuan hoang";

     reverseString(string);

      return0;

}

