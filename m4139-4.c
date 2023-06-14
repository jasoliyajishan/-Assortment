#include <stdio.h>

 main() 
 {
    int matrix1[2][2] = {{1, 2}
			,{3, 4}};
    int matrix2[2][2] = {{5, 6}
			,{7, 8}};
    int sum[2][2];
    int i, j;

    for (i = 0; i < 2; i++)
    {
	
        for (j = 0; j < 2; j++)
	{         	    
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
	}	
    }
    printf("The sum of two matrices is : \n");
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 2; j++)
        {
		
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}
