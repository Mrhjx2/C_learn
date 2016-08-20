/*************************************************************************
	> File Name: if_example1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Aug 2016 04:29:41 AM GMT
 ************************************************************************/

#include<stdio.h>
int main ()
{
    float a,b,t;
    scanf("%f,%f",&a,&b);

    if( a > b )
    {
        // exchange a and b 
        t = a;
        a = b;
        b =t;
    }
    printf("%5.2f,%5.2f\n", a,b);
    return 0;
}
