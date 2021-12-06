#include <stdio.h>
//求出a,b,c中的最大值
int main()
{
    int a, b, c, max;
    printf("Please enter the values of a,b and c:");
    scanf("%d,%d,%d", &a, &b, &c);//输入的数用，分隔
max=a;
if(max<b)
max=b;
if(max<c)
max=c;
printf("The largest number is :%d",max);
    return 0;
}

//