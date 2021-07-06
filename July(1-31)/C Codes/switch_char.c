  
#include <stdio.h>
#include <conio.h>

int main(void)
{
  char ch;

  printf("Enter the letter: ");
  ch = getche();

  switch(ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
      printf(" is a vowel\n");
      break;
    default:
      printf(" is a consonant");
      break;
  }

  return 0;
}
