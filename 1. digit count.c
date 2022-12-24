
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&num);

    /*if(num>0 && num<10)
        printf("The num is 1 digit");
    else if(num>=10 && num<100)
        printf("The num is 2 digit");
    else if(num>=100 && num<1000)
        printf("The num is 3 digit");
    else if(num>=1000 && num<10000)
        printf("The num is 4 digit");
    else if(num>=10000 && num<100000)
        printf("The num is 5 digit");
    else
        printf("The num is max than condition");*/




     while(num!=0)
    {
        num/=10;
        ++count;
    }
    printf("Total number of digit: %d\n",count);

}
