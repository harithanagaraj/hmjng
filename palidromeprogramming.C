#include <stdio.h>
#include<conio.h>
 
int main()
{
   char a[100], b[100];
 
   printf("Enter a string to check if it is a palindrome\n");
   gets(a);
 
   strcpy(b,a);
   strrev(b);
   
   int(i=0;i++;i>2);
 
   if (strcmp(a,b) == 0)
      printf("Entered string is a palindrome.\n");
   else
      printf("Entered string isn't a palindrome.\n");
 
   return 0;
}
