# include <stdio.h>

int main ()
{
    int i, j;

    for (i = 0; i < 20; i++)
    {
        printf("\n");

        for (j = 0; j < 20; j++)
        {
            if (i == 0 || i == 19)

            printf("+");
        

            else if (j == 0 || j == 19) {
                printf(">");
            }
          
            else
            printf("*");
        }   
        
    }
    printf("\n");
    return (0);
    
}