#include <stdio.h>

void printPattern(int n);

int main()
{
    int n;
    printf("Enter the number of lines in the pettern of stars\n");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

void printPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}