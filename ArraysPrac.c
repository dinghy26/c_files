#include <stdio.h>

int main()
{
    int a[30], i, num, smallest;

    printf("\nEnter no. of elements: ");
    scanf("%d", &num);

    //Read n elements in an array
    for(i=0; i < num; i++)
        scanf ("%d", &a[i]);

    //Consider First element as smallest
    smallest = a[0];

    for(i=0; i < num; i++){
        if(a[i] < smallest){
            smallest =a[i];
        }
    }
    //print results
    printf("\nSmallest Element: %d \n", smallest);

    return 0;
    
}