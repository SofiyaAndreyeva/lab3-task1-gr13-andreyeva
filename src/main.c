#include <stdio.h>
#include "count.h"

int main() {
    char sentence[1000];
    char letter;

    // Ввод предложения
    printf("Введите предложение: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        printf("Ошибка при чтении предложения.\n");
        return 1;
    }

    // Ввод искомой буквы
    printf("Введите букву для поиска: ");
    if (scanf(" %c", &letter) != 1) {
        printf("Ошибка при чтении буквы.\n");
        return 1;
    }

    // Подсчет количества
    int occurrences = countOccurrences(sentence, letter);

    // Вывод результата
    if (occurrences == 0) {
        printf("Буквы '%c' нет в предложении.\n", letter);
    } else {
        printf("Буква '%c' встречается %d раз(а) в предложении.\n", letter,
               occurrences);
    }

    return 0;
}
