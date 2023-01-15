#include <stdio.h>

int main() {
    char str[50];
    int vowels=0, consonant=0, digit=0, space=0;
    printf("Enter a Line of String: ");
    gets(str);
    for (int i=0;str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i') {
            vowels++;
        }
        if (str[i] == ' ') {
            space++;
        }
        if (str[i] > 'a' && str[i] <= 'z' && str[i] != 'e' && str[i] != 'o' && str[i] != 'u' && str[i] != 'i') {
            consonant++;
        }
        if (str[i] <= '9' && str[i] >= '0') {
            digit++;
        }
    }
    printf("Vowels: %d \n",vowels);
    printf("Consonants: %d \n",consonant);
    printf("Digits: %d \n",digit);
    printf("White spaces: %d",space);
}
