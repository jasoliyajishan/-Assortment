#include <stdio.h>

main() 
{
    int matrix[3][3] = {{1, 2, 3}
					   ,{4, 5, 6},
					    {7, 8, 9}};
    int sum = 0,i;
    

    for (i = 0; i < 3; i++)
	{
	
        sum =sum+ matrix[i][i];
   }
    printf("The sum of the diagonal elements is: %d\n", sum);

}

