#include<stdio.h>

int main()
{
   char a[100];
   int i=0,len=0,flag=0;

   printf("\n...PALINDROME CHECKING...\n");

   printf("\nEnter the string: ");
   fgets(a,sizeof(a),stdin);

   while(a[len]!='\0')
      len++;

   if(a[len-1]=='\n')
   {
      a[len-1]='\0';
      len--;
   }
   for(i=0;i<len/2;i++)
   {
      if(a[i]!=a[len-i-1])
      {
         flag=1;
         break;
      }
   }
   if(flag==0)
      printf("\nThe given string is palindrome.\n");
   else
      printf("\nThe given string is not a palindrome.\n");
   return 0;
}
