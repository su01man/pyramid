/*
Enter the number of row : 5
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>

int main(){
    int row;
    printf("Enter the number of row : ");
    scanf("%d",&row);

    for (int  i = 0; i < row; i++)
    {
        for (int j = row; j > i+1; j--)
        {
            printf(" ");
        }

        for (int k = 0; k <= (2*i); k++)
        {
            printf("*");
        }
        
        printf("\n");

    }
    
    return 0;
}