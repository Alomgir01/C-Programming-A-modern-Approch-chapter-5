#include<stdio.h>
int main()
{
    float income,tax;
    printf("Enter the amount of taxable income: ");
    scanf("%f",&income);

    if(income<750)
        tax=income*0.01f;
    else if(income>=750)
        tax=income*(7.50f+(income-750)*0.02f);
    else if(income<=2250)
        tax=income*(37.50f+(income-2250)*0.03f);
    else if(income>=3750)
        tax=income*(82.50f+(income-3750)*0.04f);
    else if(income>=5250)
        tax=income*(142.0f+(income-5250)*0.05f);
    else if(income>7000)
        tax=income*(230.0f+(income-7000)*0.006f);
    printf("Tax due: $%.2f ",tax);
}
