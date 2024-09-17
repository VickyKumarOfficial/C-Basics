// WAP to display the Pattern of solid square with sum of 4 after every number in rows and increase one by one in Column.
//   1   5   9  13  17  21  25
//   2   6  10  14  18  22  26
//   3   7  11  15  19  23  27

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // int x = n;
    for (int i = 1; i <= n; i++)
    {
        int x=i;
        for (int j = 1; j <= n; j++){
            
            printf("%3d ",x); // %3d, '3' is used to display the pattern in an structred way.
            x+=4;
        }
        printf("\n");
    }
    
    return 0;
}