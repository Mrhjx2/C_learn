/*************************************************************************
	> File Name: if_example2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Aug 2016 04:35:23 AM GMT
 ************************************************************************/

#include<stdio.h>
int main ()
{
    float a,b,c,t;
    scanf("%f %f %f",&a,&b,&c);

    if (a > b )
    {
        t = a;
        a = b;
        b = t;
    }
    if ( a > c )
    {
        t = a;
        a = c;
        c = t;
    }
    if ( b >c )
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%7.2f\n%7.2f\n%7.2f\n",a,b,c);
    return 0;
}
