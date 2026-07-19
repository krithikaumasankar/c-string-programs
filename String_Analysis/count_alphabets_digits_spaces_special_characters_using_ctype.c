#include<stdio.h>
#include<ctype.h>

int main()
{
   char str[30];
   int i=0,a=0,d=0,space=0,special=0;

   printf("\n...TO COUNT THE ALPHABETS,DIGITS,SPACES,SPECIAL,CHARACTERS...\n");
   printf("\nEnter the string: ");
   fgets(str,sizeof(str),stdin);

   while(str[i]!='\0')
   {
      if(isalpha(str[i]))
         a++;
      else if(isdigit(str[i]))
         d++;
      else if(isspace(str[i]))
         space++;
      else
         special++;
      i++;
   }
   printf("\nNumber of alphabets: %d",a);
   printf("\nNumber of digits: %d",d);
   printf("\nNumber of spaces: %d",space-1);
   printf("\nNumber of speacial characters: %d",special);
   printf("\nTotal number of characters: %d\n",i-1);
   return 0;
}
