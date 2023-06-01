#include <stdio.h>

main()
{
    int i, j, m, sum = 0, r, c;
  
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c); 
    int a[r][c]; 
    printf("Enter the matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix you entered is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    m = (r < c) ? r : c;

    for (i = 0; i < m; i++)
    {
        sum += a[i][i];
    }

    printf("Sum of diagonal elements: %d\n", sum);


}

