#include<stdio.h>
int main<void>
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d",a,b,a+b);
    printf("%d-%d=%d",a,b,a-b);
    printf("%d*%d=%d",a,b,a*b);
    printf("%d/%d=%d",a,b,a/b);
    printf("%d%%d=%d",a,b,a%b);
    return 0;

}