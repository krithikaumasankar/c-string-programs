#include<stdio.h>

int main()
{
   char a[100],ch;
   int i=0,count=0;

   printf("\n...TO FIND THE FREQUENCY OR OCCURANCE OF A CHARACTER...\n");

   printf("\nEnter the string: ");
   fgets(a,sizeof(a),stdin);
   printf("Enter the character to find: ");
   scanf("%c",&ch);

   while(a[i]!='\0')
   {
      if(a[i]==ch)
         count++;
      i++;
   }
   if(count==0)
      printf("\n%c is not found in the string.\n",ch);
   else
      printf("\ncharacter %c occur %d times.\n",ch,count);
   return 0;
}
