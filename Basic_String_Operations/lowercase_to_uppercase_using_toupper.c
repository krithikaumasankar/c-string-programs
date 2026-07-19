#include<stdio.h>
#include<string.h>

int main()
{
   char a[30];
   int i=0;

   printf("\n...LOWERCASE TO UPPERCASE...\n");
   printf("\nEnter the string: ");
   fgets(a,sizeof(a),stdin);

   while(a[i]!='\0')
   {
      a[i]=toupper(a[i]);
      i++;
   }
   a[i]='\0';
   puts(a);
   return 0;
}
