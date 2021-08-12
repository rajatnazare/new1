5].Write a c program to print all even and odd numbers btwn 1-100.
#include<stdio.h> 
int main()
{
    int i;
    printf("odd numbers are:\n");
    for(i=1;i<=100;i++)
    {
       if(i%2!=0)
       printf("%d\n",i);
    }
    printf("even numbers are\n");
    for(i=0;i<=100;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
}
