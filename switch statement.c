
#include<stdio.h>
int main()
{
    int grade, excellent,good,avg,poor,fail,pass;

    printf("Enter a grade no.: ");
    scanf("%d",&grade);
    if(grade==4)
        printf("excellent\n");
    else if (grade==3)
        printf("Good\n");
    else if (grade==2)
        printf("avg\n");
    else if(grade==1)
        printf("poor\n");
    else if(grade==0)
        printf("fail\n");
    else
        printf("not in grade\n\n\n");


    {
        printf("Enter a grade no.:");
        scanf("%d",&grade);
        switch (grade)
        {
        case 4:
            printf("Excellent\n");
            break;
        case 3:
            printf("Good\n");
            break;
        case 2:
            printf("avg\n");
            break;
        case 1:
            printf("poor\n");
            break;
        case 0:
            printf("fail\n");
            break;
        default:
            printf(" not in grede\n");
            break;
        }
    }


    {
        printf("Enter a great no.: ");
        scanf("%d",&grade);
        switch(grade)
        {
        case 4:  case 3: case 2:
            pass++;
            printf("Pass",pass);
            break;


        case 1:
            printf("poor\n");
            break;
        case 0:
             grade++;
            printf("fail\n",grade);
            break;
        default:
            printf(" not in grede\n");
            break;
        }
    }
}
