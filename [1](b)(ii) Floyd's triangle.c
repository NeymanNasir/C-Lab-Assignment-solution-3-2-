#include<stdio.h>

int main()
{
    int n, i, j, x = 1;
    printf("Enter number of row: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", x++);
        }
        printf("\n");
    }
    return 0;
}
