// Print AP - 1, 3, 5, 7, 8, .....

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the nth number :");
//     scanf("%d", &n);
//     for (int i = 1; i <= 2*n-1; i=i+2){
//         printf("%d ",i);   
//     }
        
//     return 0;
// }

// Display AP - 4, 7, 10, 13...

#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth number :");
    scanf("%d",&n);
    for (int i = 4; i <= 3*n-1; i=i+3)
        printf("%d\n",i);
    
    return 0;
}