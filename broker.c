#include<stdio.h>
int main(void)
{
    float commision,value;
    printf("Enter value of trade: ");
    scanf("%f",&value);

    if(value<2500.00f)
        commision =30.00f+ 0.17f*value;
    else if(value<6250.00f)
        commision=56.00f+0.0066f*value;
    else if(value<20000.00f)
        commision= 76.00f+0.0034*value;
    else if(value<50000.00f)
        commision=100.00f+0.0011f*value;
    else if(value<500000)
        commision=155.00f+0.0011f*value;
    else
        commision = 255.00f+0.0009f*value;
    if(commision<39.00f)
        commision = 39.00f;
    printf("Commision: $%.2f\n",commision);
}
