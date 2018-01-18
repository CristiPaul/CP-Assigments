#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
      FILE *fp1, *fp2;
      char ch;
      fp1 = fopen("source.txt", "r");
      if (fp1 == NULL)
      {
            puts("File does not exist..");
            exit(1);
      }
      fp2 = fopen("target.txt", "w");


      while((ch=fgetc(fp1))!=EOF)
      {
            ch = toupper(ch);
            fputc(ch,fp2);
      }

      return 0;
}
