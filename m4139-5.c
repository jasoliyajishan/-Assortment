#include <stdio.h>

 main() 
 {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int t[3][3];
	int i,j;
    for ( i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++)
		 {
            t[i][j] = matrix[j][i];
        }
    }

    printf("Transpose : \n");
    for (i = 0; i < 3; i++) 
	{
        for ( j = 0; j < 3; j++) 
		{
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }


}

