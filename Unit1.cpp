#include<math.h>
#include<stdio.h>
#include<conio.h>
int i,s,n ;
void main()
{
  printf ("n=");
  scanf("%d",&n);
  if (n>0)
  {
   s=0;
   i=2;
   while(i<=n-1)
   {
        if(n%i==0)
        {
            s=s+i;

        }
        i=i+1;
   }
   if(s==0)
   {
        printf("%d est premier",n);
   }
   else
   {
        printf("%d est non premier",n);
   }
  }
  else
  {
   printf("tsisy");
  }

getch();

}
