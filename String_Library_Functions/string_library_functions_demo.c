#include<stdio.h>
#include<string.h>

int main()
{
   char a[100],b[100],c[100];

   printf("\n...STRING MANIPULATION...\n");

   printf("\nEnter the first string: ");
   fgets(a,sizeof(a),stdin);
   printf("Enter the second string: ");
   fgets(b,sizeof(b),stdin);

   //1.strlen()
   printf("\nLength of first string including null character: %d",strlen(a));
   printf("\nLength of second string including null character: %d",strlen(b));

   //2.strcpy()
   strcpy(c,a);
   printf("\nAfter copying a to c: %s",c);

   //3.strcat()
   strcat(a,b);
   printf("\nAfter concatenation: \n%s",a);

   //4.strcmp()
   if(strcmp(a,b)==0)
      printf("\nBoth strings are equal");
   else if(strcmp(a,b)>0)
      printf("\nString 1 is greater");
   else
      printf("\nString 2 is greater\n");

   /*5.strrev(),strlwr(),strupr()
    *
    * printf("\nReversed first string: %s",strrev(a));
    * printf("\nLowercase of the first string: %s",strlwr(a));
    * printf("\nUppercase of the second string: %s",strupr(a));*/

   return 0;
}
