#include <stdio.h>

void main()
{

    int day, month, year, result;

    printf("Tell me your day, month and year of birth.\nLike this: DD+MM+YYYY\n\n: ");//dsadsadas

    printf("Day: ");
    scanf_s("%d", &day);

    printf("Month: ");
    scanf_s("%d", &month);

    do {
        printf("Year: ");
        scanf_s("%d", &year);
    } while (year < 1000 || year > 9999);

    printf("\nYour birth date is: %d/%d/%d", day, month, year);

    result = day + month + year;
    printf("\n%d + %d + %d = %d", day, month, year, result);
}