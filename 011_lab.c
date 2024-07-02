//program to read roll no,name,gender,height of a person display how many bytes of memory each variable occupies.
#include <stdio.h>
int main()
{



 int rollno;

char name [50];

char gender;
double height;



printf ("enter the roll no:");
scanf("%d",&rollno);
printf ("enter the name:");
scanf("%s",&name);
printf ("enter the gender:");
fflush(stdin);
scanf("%c",&gender);
printf ("enter the height:");
scanf("%lf",&height);


printf("\n no, of bytes of memory allocated by rollno:%d",sizeof(rollno));


printf("\n no, of bytes of memory allocated by name:%d",sizeof(name));

printf("\n no.of bytes of memory allocated by gender :%d",sizeof(gender));

printf("\n no.of bytes of memory allocated by height:%d",sizeof(height));

return 0;
}
