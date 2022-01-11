#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int i = 11;

    // while(i < 11){
    //     printf("%d\n", i);
    //     i++;
    // }
    

    // do{
    //     printf("%d\n", i);
    //     i++;

    // }while(i < 11);


    // int i;
    // for( i = 1; i < 11; ){

    //     printf("%d\n", i);
    //     i++;
    // }

     
    //  1
    //  1 2
    //  1 2 3
    //  1 2 3 4
    //  1 2 3 4 5
    
    int i, j, n;     // i -> rows, j -> columns
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

// * * * * *
// * * * *
// * * *
// * *
// *