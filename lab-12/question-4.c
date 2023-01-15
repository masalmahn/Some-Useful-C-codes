#include <stdio.h>

#include <string.h>

int main() {
  //Given an array of strings/animals
  char s[10][20];

  //display the initial order of the strings/animals
  printf("Enter 10 words: ");
  for(int i = 0; i< 10; i++) {
    scanf("%s",s[i]);
  }


  //create a temporary array of character temp
  char temp[50];

  // storing strings in the lexicographical order
  for (int i = 0; i < 10; ++i) {
    for (int j = i + 1; j < 10; ++j) {

      // if the strings are not in the lexicographical order, swap them.
      if (strcmp(s[i], s[j]) > 0) {
        strcpy(temp, s[i]);
        strcpy(s[i], s[j]);
        strcpy(s[j], temp);
      }
    }
  }

  //display strings in the lexicographical order
  printf("\nAnimals in the lexicographical order: \n");
  for (int i = 0; i < 10; ++i) {
    printf("%s\n", s[i]);
  }

  return 0;
}
