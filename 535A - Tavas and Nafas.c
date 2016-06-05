#include<stdio.h>
void func1(int n)
{
    switch(n)
    {
        case 0:printf("zero");break;
        case 1:printf("one");break;
        case 2:printf("two");break;
        case 3:printf("three");break;
        case 4:printf("four");break;
        case 5:printf("five");break;
        case 6:printf("six");break;
        case 7:printf("seven");break;
        case 8:printf("eight");break;
        case 9:printf("nine");break;
    }
}
void func2(int n)
{
    switch(n)
    {
        case 1:printf("ten");break;
        case 2:printf("twenty");break;
        case 3:printf("thirty");break;
        case 4:printf("forty");break;
        case 5:printf("fifty");break;
        case 6:printf("sixty");break;
        case 7:printf("seventy");break;
        case 8:printf("eighty");break;
        case 9:printf("ninety");break;

    }
}
void func3(int n)
{
    switch(n)
    {
        case 1:printf("eleven");break;
        case 2:printf("twelve");break;
        case 3:printf("thirteen");break;
        case 4:printf("fourteen");break;
        case 5:printf("fifteen");break;
        case 6:printf("sixteen");break;
        case 7:printf("seventeen");break;
        case 8:printf("eighteen");break;
        case 9:printf("nineteen");break;
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n<=9)
        func1(n);
    else
    {
        int n1=n%10;
        if(n1==0)
        {
            func2(n/10);
            return 0;
        }
        n=n/10;
        int n2=n;
        if(n==1)
        {
            func3(n1);
            return 0;
        }
        func2(n);
        if(n1!=0)
        {
            printf("-");
            func1(n1);
        }
    }
    return 0;
}