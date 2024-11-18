// Print the patter:
/*
  1 2 3 4
    1 2 3
      1 2 
        1
*/
// #include<stdio.h>

// int main(){
//     int n = 4;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) printf("  ");
//         for (int k = 1; k <= n-i+1; k++) printf("%d ",k);
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>

int main(){
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("  ");
        // for (int k = 1; k <= n-i+1; k++) printf("%d ",k);
        // for (int k = 1; k <= n-i+1; k--) printf("%d ",k);
        printf("\n");
    }
    return 0;
}