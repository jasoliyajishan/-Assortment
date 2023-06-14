#include <stdio.h>

 main()
 {
    int array[5] = {1, 2, 3, 4, 5};
    int temp = array[4];
    int i;

    for (i = 4; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = temp;

    printf("The right rotate  array is : ");
    for (i = 0; i < 5; i++)
    {
       printf("%d ", array[i]);
    }
    printf("\n");

    
}
