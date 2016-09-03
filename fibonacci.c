/*************************************************************************
	> File Name: fibonacci.c
	> Author:hjx 
	> Mail: 
	> Created Time: Sat 03 Sep 2016 12:54:17 AM GMT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int f1 = 1, f2 = 1, f3;
    int i;
    printf("%12d\n%12d\n", f1, f2);

    for(i=1; i<=38; i++)
    {
        f3 = f1 + f2;
        printf("%12d\n",f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}
