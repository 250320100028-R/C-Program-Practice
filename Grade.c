#include<stdio.h>
void main()
{
    int n;
    printf("Enter the mark: ");
    scanf("%d", &n);
    if (n >= 90 && n <= 100)
    printf("Grade A\n");
    else if (n >= 80 && n < 90 )
    printf("Grade B\n");
    else if (n >= 70 && n < 80)
    printf("Grade C\n");
    else if (n >= 60 && n < 70)
    printf("Grade D\n");
    else if (n >= 50 && n < 60)
    printf("Grade E\n");
    else
    printf("Grade F\n");
}