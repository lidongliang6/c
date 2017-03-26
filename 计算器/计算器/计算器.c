#include<stdio.h>
int main(void)
{
    int i;
    double n,a,s;
    i=1;
    s=0;
    printf("请输入您要求平均值的数集的数值的个数：");
    scanf("%lf",&n);

    while (n>=i)
    {
        printf("请输入第%d个数\n",i);
        scanf("%lf",&a);
        s=s+a;
        i++;
    }
    printf("这组数的平均值为%.2f",s/n);
    return 0;

}