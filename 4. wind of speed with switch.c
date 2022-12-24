
#include<stdio.h>
int main()
{
    int speed,description;
    printf("Enter Speed(knots): ");
    scanf("%d",&speed);

    if(speed<1)
        printf("Calm");
    else if(speed >=1 && speed <=3)
    printf("light air");
    else if(speed>=4 && speed <=27)
        printf("Breeze");
    else if(speed>= 28 && speed <=47)
        printf("Gale");
    else if(speed>=48 && speed <=63)
        printf("Strom");
    else if(speed>63)
        printf("Hurricane");
    else
        printf("Speed is not recognized");

}
