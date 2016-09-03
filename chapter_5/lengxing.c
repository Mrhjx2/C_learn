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
    //printf("Please input a number for cengshu: ");
    do
    {
        //scanf("%d",&n);
        printf("Please input a number for cengshu: ");
        scanf("%d",&n);
    }
    while( n%2 == 0 );

    for(i=1; i <= (n+1)/2; i++)
    {
        for(j=1; j <= (n+1)/2-i; j++ )
        {
            printf(" ");
        }
        for(k=1; k <= i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i <= n/2; i++)
    {
        for(j=1; j <=i; j++)
        {
            printf(" ");
        }
        for(k=1; k <= (n/2-i)*2+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
