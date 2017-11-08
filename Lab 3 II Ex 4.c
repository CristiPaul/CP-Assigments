#include <stdio.h>
#include <stdlib.h>

int n,i,aux,found;
int a[30];

int main()
{
    printf ("n=");
    scanf ("%d",&n);

    printf ("The numbers :");
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }

   do
   {
        found = 0;
        for (i=0;i<n-1;i++)
            if (a[i]>a[i+1])
            {   
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                found=1;
            }
   }
   while(found==1);
    
   for(i=0;i<n;i++)
       prinft("%d ",a[i]);

 
    return 0;
}
