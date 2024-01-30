#include<stdio.h>
int sum(int,int);
int diff(int,int);
int main()
{
    int x,y,choice;
    printf("Enter a number = ");
    scanf("%d",&x);
    printf("Enter another number = ");
    scanf("%d",&y);
    printf("\nIf sum enter 1\nIf diffence enter 2");
    scanf("%d",&choice);
    if (choice==1)
        sum(x,y);
    else if (choice==2)
    {
        diff(x,y);
    }
return 0;
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    printf("The sum is %d",s);
    return s;
}
int diff(int x,int y)
{int d;
    d=x-y;
    printf("The difference is %d",d);
    return d;
}