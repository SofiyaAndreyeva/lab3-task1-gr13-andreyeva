
#include <stdio.h>

//функция подсчета вхождения буквы в предложении
int countOccurrences(char *str, char letter) {

}

int main ()
{
  char sentence[1000];
  char letter;

  //ввод предложения 
  printf("Введите предложение: ");
  fgets(sentence, sizeof(sentence), stdin); 

  //ввод искаемой буквы
  printf("Введите букву для поиска: ");
  scanf("%c", &letter); 

  // подсчет количества 
  int occurrences = countOccurrences(sentence, letter); 

  //вывод результата 
  if (occurrences == 0) {
    printf("Буквы '%c' нет в предложении.\n",letter);
  }else {
    printf("Буква '%c' встречается %d раз(а) в предложении.\n", letter, occurrences);
  }

  return 0;
}
