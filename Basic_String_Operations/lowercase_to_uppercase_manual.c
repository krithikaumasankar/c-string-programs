#include<stdio.h>

int main()
{
   char a[30],b[30];
   int i=0;

   printf("\n...LOWERCASE TO UPPERCASE...\n");
   printf("\nEnter the string: ");
   fgets(a,sizeof(a),stdin);

   while(a[i]!='\0')
   {
      if(a[i]>='a' && a[i]<='z')
         b[i]=a[i]-32;
      else
         b[i]=a[i];
      i++;
   }
   b[i]='\0';
   puts(b);
   return 0;
}
