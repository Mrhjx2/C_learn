/*************************************************************************
	> File Name: jinzita.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Sep 2016 02:11:14 AM GMT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("pelease input a number: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        for(k=1; k <= n-i; k++)
        {
            printf(" ");
        }
        if( i==1 || i == n )
        {
            for(j=1; j <= i*2-1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1; j <= i*2-1; j++)
            {
                if( j == 1 || j == i*2-1 )
                {
                    printf("*");
                }
                else printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
