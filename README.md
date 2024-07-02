# 013_lab.c
//program to read the temperature in fahrenheit and convert it into centigrade.
#include <stdio.h>
int main()
{
    int f,c;
    f=c=0;

    printf("enter temperature in fahrenheit:");
    scanf("%d",&f);

    c=(f-32)*5/9;

    printf("Temperature in centigrade is :%d",c);


    return 0;

}
