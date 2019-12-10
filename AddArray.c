#include <stdio.h>

int main ()
{
    int i, amount, myArray[10];
    
    printf ("How Many values do you whant to add to the array?\n");
    scanf("%d", &amount);
    
    
    for (i = 0; i < amount; i++) {
        printf ("Enter value # %d:\n", i + 1);
        scanf (" %d", &myArray[i]);
    }
    
    for (i = 0; i < amount; i++){
        
        printf("position [%d] = %d \n", i , myArray[i]);
        
    }
    
