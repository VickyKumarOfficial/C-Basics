// Print the patter:
/*
  1 2 3 4
  1 2 3
  1 2 
  1
*/

#include<stdio.h>

int main(){
    int n = 5;
    int a = n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= a; j++){
            printf("%d ",j);
        }
        a--;
        printf("\n");
        
    }
    
    return 0;
}


// OR


#include<stdio.h>

int main(){
    int n = 5; printf("Enter a number :"); scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n+1-i; j++) printf("%d ",j);
        printf("\n");
    }
    return 0;
}