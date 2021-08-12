#include<stdio.h>
int main()
{
    char chr;
    int a,b,result;
    printf("enter your chioce\n");
    scanf("%c",&chr);
    printf("enter a&b value\n");
    scanf(" %d %d",&a,&b);
    
     switch(chr)
     {
         case 'a':
         result=a+b;
         printf("addition is %d",result);
         break;
         
         case 'b':
         result=a-b;
         printf("diff is %d",result);
         break;
         default:
         printf("default case action");
     }
}
