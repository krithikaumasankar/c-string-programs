#include<stdio.h>
int main()
{
   char a[100];
   int i=0;
   int w=0,v=0,c=0;

   printf("\n...TO COUNT THE VOWELS,CONSONANTS,WORDS...\n");
   printf("\nEnter the string: ");
   fgets(a,sizeof(a),stdin);

   while(a[i]!='\0')
   {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
         v++;
      else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
         c++;
      else if(a[i]==' ')
         w++;
      i++;
   }
   if(i>0)
      w++;
   printf("\nNumber of vowels: %d",v);
   printf("\nNumber of consonants: %d",c);
   printf("\nNUmber of words: %d\n",w);
   return 0;
}
