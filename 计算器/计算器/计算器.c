#include<stdio.h>
int main(void)
{
    int i;
    double n,a,s;
    i=1;
    s=0;
    printf("��������Ҫ��ƽ��ֵ����������ֵ�ĸ�����");
    scanf("%lf",&n);

    while (n>=i)
    {
        printf("�������%d����\n",i);
        scanf("%lf",&a);
        s=s+a;
        i++;
    }
    printf("��������ƽ��ֵΪ%.2f",s/n);
    return 0;

}