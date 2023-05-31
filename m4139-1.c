#include <stdio.h>

main()
 {
    int arr[] = {1,-2,3,-4,5,-6,7,-8,9,-10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < size; i++) 
	{
        if (arr[i] < 0)
		 {
            printf("%d ", arr[i]);
        }
    }


}

