
#include "count.h"
int countOccurrences(char *str, char letter) {


  int count = 0;
  while (*str != '\0') { // пока нет конца строки
    if (letter == *str) { //если буква равна нужной букве
      count++;
    }
    str++;
  }
  return count;
}
