/*************************************************************************
	> File Name: fibonacci_2.c
	> Author:hjx 
	> Mail: 
	> Created Time: Sat 03 Sep 2016 01:02:33 AM GMT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int f1 =1, f2 = 1;
    int i;
    for(i=1; i<=20; i++)
    {
        printf("%12d\n%12d\n",f1, f2);
        if(i%2 == 0) printf("\n");
        f1 =f1 + f2;
        f2 = f2 + f1;
    }
    return 0;
}
