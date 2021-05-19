#include <stdio.h>

int main(void)
{
    int s1,s2,s3;
    printf("side1 ");
    scanf("%d",&s1);
    printf("side2 ");
    scanf("%d",&s2);
    printf("side3 ");
    scanf("%d",&s3);
    s1=(s1*s1);
    s2=(s2*s2);
    s3=(s3*s3);
    if((s1==(s2+s3))||(s2==(s1+s3))||(s3==(s1+s2)))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
