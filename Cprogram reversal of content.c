#include<stdio.h>
int main ()
{
   FILE*fp;
   char ch;
   int i, pos;
   fp=fopen("input.txt","r");
   if(fp==NULL)
  {
      printf(" file does not exist");
   }
  fseek(fp,0,SEEK_END);
  pos= ftell(fp);
// printf("current position is %d\n",pos);
  i=0;
  while(i<pos)
{
  i++
  fseek(fp,-i,SEEK_END);
// printf ("%c",fgetc(fp));
  ch=fgets(fp);
  printf("%c",ch);
}
rerurn 0;
}

  
