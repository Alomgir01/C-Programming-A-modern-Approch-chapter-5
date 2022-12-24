#include <stdio.h>

int main()
{
    int a, b, c, d, smallNum1, largeNum1, smallNum2, largeNum2;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a < b)
    {
        smallNum1 = a;
        largeNum1 = b;
    }
    else
    {
        smallNum1 = b;
        largeNum1 = a;
    }
    if(c < d)
    {
        smallNum2 = c;
        largeNum2 = d;
    }
    else
    {
        smallNum2 = d;
        largeNum2 = c;
    }
    if(largeNum1 < largeNum2)
        printf("The largest number is: %d\n", largeNum2);
    else
        printf("The largest number is: %d\n", largeNum1);
    if(smallNum1 < smallNum2)
        printf("The smallest number is: %d\n", smallNum1);
    else
        printf("The smallest number is: %d\n", smallNum2);
    return 0;
}
