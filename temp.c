// #include<stdio.h>

// int main(){
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i+1; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("%d",k);
//         }
//         for (int l = i-1; l >= 1; l--) {
//             printf("%d",l);
//         }
//         printf("\n");
//     }
//     return 0;
//  }

#include<stdio.h>

int main(){
    int n = 4;
    int a=1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) printf(" ");
        for (int k = 1; k <= i; k--) {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}