#include <stdio.h>

float calculateAverage(int marks[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    return (float)sum / n;
}

int main(void)
{
    int n;
    float average;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter marks for %d subjects:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    average = calculateAverage(marks, n);

    printf("\nStudent Average = %.2f\n", average);

    return 0;
}
