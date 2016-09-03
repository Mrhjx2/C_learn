/*************************************************************************
	> File Name: jinzita_1.c
	> Author:Hejx
    >porgramming:
	> Mail:
	> Created Time: Sat 03 Sep 2016 03:40:05 AM GMT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("Please input a number for cengshu: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        for(j=1; j <= n-i; j++ )
        {
            printf(" ");
        }
        for(k=1; k <= i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
