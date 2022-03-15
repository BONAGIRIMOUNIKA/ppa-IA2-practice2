#include<stdio.h>

void input(char *a)
{
  printf("enter a word : ");
  scanf("%s",a);
}

int str_rev(char a)
{
  int m=0,i;
  for(i=0;a[i]!='\0';i++)
    m++;
  return m;
}

void output(char a,int reversea)
{
  printf("the reverse of the string is : ");
  for(int i=reversea-1;a[i]!='\0';i--)
    printf("%c;",a[i]);
}

int main()
{
  char a[100];
  input(a);
  int reversea;
  reversea=str_rev(a);
  output(a,reversea);
  return 0;
}


