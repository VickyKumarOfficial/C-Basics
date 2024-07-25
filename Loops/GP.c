//GP - 1, 2, 4, 6, 8, ...

// #include<stdio.h>
// int main(){
//     int n;
//     int a = 1;
//     printf("Enter a number :");
//     scanf("%d", &a);
//     for (int i = 1; i <= n; i=i+1){
//         printf("%d ",a);
//         a = a+2; 
//     }
    
//     return 0;
// }

//GP - 3, 12, 48...n

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int a = 3; //Keep remember if not using mathmatical formula then create a new variable
//     for (int i = 1; i <= n; i++){
//         printf("%d ", a); //After creating new variable just play with that variable by adjusting it with que condition and print that
//         a = a * 4;
//     }
    
// }

// GP - 1, 2, 4, 8, 16, ...

#include<stdio.h>
int main(){
    int n, a = 1;
    printf("Enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        a = a*2;
    }
    
    return 0;
}