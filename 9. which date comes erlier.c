
#include <stdio.h>

int main(void)
{
    int month1, day1, year1, month2, day2, year2, first, second;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    first = (month1 * 30) + day1 + (year1 * 365);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    second = (month2 * 30) + day2 + (year2 * 365);

    if (first == second)
        printf("Both dates are the same.");
    else if (first < second)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",month1, day1, year1, month2, day2, year2);
    else
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",month2, day2, year2, month1, day1, year1);
}
