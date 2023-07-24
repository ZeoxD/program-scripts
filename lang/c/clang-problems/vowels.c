#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, length = 0;

    scanf("%s", str);
    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (j = i; j < length; j++) {
                str[j] = str[j + 1];
            }
            i--;
            length--;
        }
        str[length + 1] = '\0';
    }
   printf("%s", str);
   return 0;
}
