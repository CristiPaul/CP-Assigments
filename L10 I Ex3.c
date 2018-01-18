#include <stdio.h>
#include <stdlib.h>


int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int linecount;


 linecount = 1;



  printf("Enter a filename :");
  gets(filename);

   fp = fopen(filename,"r");


   if ( fp )
   {
	   while ((ch=getc(fp)) != EOF) {
		   if (ch == '\n')
                ++linecount;
	   }
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", linecount);

getchar();
return(0);
}
