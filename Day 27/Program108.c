#include <stdio.h>
int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Marks of 3 Subjects:\n");
    scanf("%f%f%f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = total / 3;
    printf("\n------ Marksheet ------\n");
    printf("Roll No : %d\n", roll);
    printf("Nmae : %s\n", name);
    printf("Total : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    if (percentage >+ 40)
    printf("Result : PASS");
    else
    printf("Result : FAIL");
    return 0;
}