#include <stdio.h>

int main() {
    int m1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int m2[3][3] = {{10, 11, 12},
                         {13, 14, 15},
                         {16, 17, 18}};
    int r[3][3];
int i,j;
    for (i = 0; i < 3; i++)
	 {
        for ( j = 0; j < 3; j++)
		 {
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("adition of two matrix : \n");
    for ( i = 0; i < 3; i++) 
	{
        for ( j = 0; j < 3; j++) 
		{
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    
    
}

