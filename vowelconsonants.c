#include <stdio.h>

int main() {
    char s[200];
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == ' ') {
            spaces++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            digits++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') ||
                 (s[i] >= 'A' && s[i] <= 'Z')) {

            if (s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' ||
                s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    printf("%d %d %d %d", vowels, consonants, digits, spaces);

    return 0;
}