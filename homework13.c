#include <stdio.h>
#include <string.h>
#include <locale.h>
    

int main() {

    setlocale(LC_CTYPE, "RUS");

    char str[1000];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
    printf("Исходная строка: %s\n", str);


    int space_flag = 0; 
    int j = 0;
    for (int i = 0; str[i] != '\0';  i++) {
        if (str[i] == ' ') {
            if (!space_flag) {
                str[j++] = str[i];
                space_flag = 1;
            }
        }
        else {
            str[j++] = str[i];
            space_flag = 0;
        }
    }
    str[j] = '\0';

    printf("Результат: \"%s\"\n", str);

    return 0;


}

