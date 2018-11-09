#include <stdio.h>

size_t my_strlen(const char *s)
{
  const char *p = s;
  while(*p)
    ++p;
  return(p - s);
}
int main(void)
{
  int i;
  printf("welcome");  
  char *s[] = { "Github Tutorials,Magala" };
  for(i=0; i<2; ++i)
    printf("string length of %s = %d\n",s[i],my_strlen(s[i]));
  return 0;
}
