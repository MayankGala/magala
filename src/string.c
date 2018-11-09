#include <stdio.h>

<<<<<<< HEAD
size_t my_strlen(char *s)
=======
size_t my_strlen(const char *s)
>>>>>>> a6e4b1e0ab0597d9df22a609a306ef52231c1dbe
{
  const char *p = s;
  while(*p)
    ++p;
  return(p - s);
}
char *my_strcpy(char *t, char *s)
{
  char *p = t;
  while(*t++ = *s++);
     return p;
}

int main(void)
{
  int i;
  char p1[32];
  printf("welcome");  
  char *s[] = { "Github Tutorials,Magala" };
  
  for(i=0; i<2; ++i)
    printf("string length of %s = %1u\n",s[i],my_strlen(s[i]));
    printf("%s\n", my_strcpy(p1, "Hello World !!"));
  return 0;
}
