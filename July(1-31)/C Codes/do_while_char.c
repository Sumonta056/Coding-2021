#include <stdio.h>

int main()
{
  char ch;

  ch = 'a';

  do 
     printf ( "%c", ch ); 
  while ( ch++ < 'z' );
  
  printf ( "\n" );
}