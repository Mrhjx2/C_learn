/*************************************************************************
	> File Name: exa_7.c
	> Author: hjx
	> Mail: mrhjx@163.com
	> Created Time: Sat 03 Sep 2016 01:08:30 AM GMT
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int sign = 1, k =0;
    double pi = 0.0, n = 1.0, term = 1.0;

    while(fabs(term) >= 1e-8)
    {
        pi = pi + term;
        n = n + 2;
        sign = -sign;
        term = sign/n;
        k++;
    }
    pi = pi * 4;
    printf("pi=%10.8f\nloopth is %12d\n", pi, k);

    return 0;
}
