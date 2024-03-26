#include <stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;

    int sum = 0;
    printf("enter the rows and columns  of matrix a:\n");
    scanf("%d%d", &arows, &acolumns);
    printf("enter the elements of matrix a:");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the rows and columns of matrix b:");
    scanf("%d %d", &brows, &bcolumns);
    if (arows != bcolumns)
    {
        printf("sorry");
    }
    else
    {
        printf("enter the elements of matrix of b:\n ");
        for (int i = 0; i < brows; i++)
        {
            for (int j = 0; j < bcolumns; j++) 
            {
                scanf("%d", &b[i][j]); // change a[i][j] to b[j][i]
            }
        }
    }
    printf("\n");
    for (int i = 0; i < arows; i++)
{
    for (int j = 0; j < bcolumns; j++)
    {
        for (int k = 0; k < bcolumns; k++) // change bcolumns to acolumns
        {
            sum += a[i][k] * b[k][j];
        }
        product[i][j] = sum;
        sum = 0;
    }
}
    // PRINTING THE ARRAY ELEMENTS
    printf("Resultant matrix \n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf("%d", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}