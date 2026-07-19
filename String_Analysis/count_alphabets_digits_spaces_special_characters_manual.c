#include<stdio.h>

int main()
{
   char a[100];
   int i=0;
   int alphabet=0,digits=0,space=0,special=0;

   printf("\n...TO COUNT THE ALPHABETS,DIGITS,SPACES,SPECIAL CHARACTERS,CHARACTERS...\n");
   printf("\nEnter a string: ");
   fgets(a,sizeof(a),stdin);

   while(a[i]!='\0')
   {
      if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
         alphabet++;
      else if(a[i]>='0' && a[i]<='9')
         digits++;
      else if(a[i]==' ')
         space++;
      else
         special++;
      i++;
   }
   printf("\nNumber of alphabets: %d",alphabet);
   printf("\nNumber of digits: %d",digits);
   printf("\nNumber of spaces: %d",space);
   printf("\nNumber of special characters: %d",special-1);
   printf("\nNumber of characters: %d\n",i-1);
   return 0;
}
