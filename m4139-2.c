#include <stdio.h>

main() 
{
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arry) / sizeof(arry[0]);
    int largest = arry[0], secondLargest = arry[0];
    int i;

    for (i = 1; i < size; i++) 
	{
        if (arry[i] > largest) 
		{
            secondLargest = largest;
            largest = arry[i];
        } 
		else if (arry[i] > secondLargest && arry[i] < largest)
		 {
            secondLargest = arry[i];
        }
    }

    printf("The second largest number in the array is: %d\n", secondLargest);


}

