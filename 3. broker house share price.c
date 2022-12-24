
#include<stdio.h>
int main(void)
{
    float commision,price,share;
    printf("Enter the number of share: ");
    scanf("%f",&price);
    printf("Enter prices per share: ");
    scanf("%f",&share);

    if(price<2000)
        commision =33.00f+0.03f*share;
    else if(price>2000)
        commision = 39.00f+0.03f*share;
    printf("Rival Commision: $%.2f\n",commision);
}
