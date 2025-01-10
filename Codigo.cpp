#include <stdio.h>
#include <ctype.h>
#include <string.h>


int vowel;
int consonant;
int *phrase;

int main() {
  char s[100];

  void getInput(char *phrase);
  printf("Dame una frase\n: ");
  scanf("%99s", str);
}
  int countVowels(char *phrase) {
    int count = 0;
    while (*phrase) {
      if (vowel(*phrase))
      printf("%c", *phrase);
    }
    return count;
  }

void countVowels();

void countConsonants();

  int countConsonants(char *phrase) {
    int count = 0;
    while (*phrase) {
      if (consonant(*phrase))
        printf("%c", *phrase);
    }
    return count;

    {
      int vocal[5], consonant [22];
      printf("Introduce la primera cadena: ");
      scanf("%s", countVowels());
      printf("Introduce la segunda cadena: ");
      scanf("%s", countConsonants());

      if (strcmp(countVowels(), countConsonants()) == 0) {
        printf("Es vocal\n");
      } else {
        printf("Es consonante\n");
      }
      return 0;
    }
  }
