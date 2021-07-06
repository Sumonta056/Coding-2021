//Declaration:  char *strcat(char *str1, const char *str2); 
//Return:       returns *str1. 

  #include <stdio.h>
  #include <string.h>

  int main(void)
  {
    char s1[80], s2[80];

    printf("s1:");
    gets(s1);
    printf("s2:");
    gets(s2);

    strcat(s2, s1);
    printf(s2);

    return 0;
  }

         
/*
s1:s
s2:2
2s*/ 