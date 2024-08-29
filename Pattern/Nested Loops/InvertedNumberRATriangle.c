// Print the patter:
/*
  1 2 3 4
  1 2 3
  1 2 
  1
*/

#include<stdio.h>

int main(){
    int n=4;
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ",j);
        }
        a--;
        printf("\n");
        
    }
    
    return 0;
}
