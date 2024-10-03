#include <stdio.h>

int main(){
    int CP, SP;
    printf("Enter Cost price and Selling price : ");
    scanf("%d %d", &CP, &SP);

    if (CP > SP){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    
    if (CP == SP){
        printf("Neither loss nor profit");
    }
     
return 0;
}