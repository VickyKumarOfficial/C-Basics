// #include<stdio.h>

// int fact(int n);

// int fact(n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main(){
//     int n = 7;
//     int r = 4;

//     int result = fact(n) / (fact(r) * fact(n-r));
//     //  result =   7!   /   r!     *   (n-r)!
//     printf("%dC%d = %d", n, r, result);

//     return 0;
// }


// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for (int i = 2; i <= x; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// int combination(int n, int r){
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
// int main(){
//     int n, r;
//     printf("Enter n :");
//     scanf("%d",&n);
//     printf("Enter r :");
//     scanf("%d",&r);
    
//     int ncr = combination(n, r); 
//     printf("The factorial is = %d",ncr);
//     return 0;
// }

#include<stdio.h>
int fact(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++) fact *= i;
    return fact;
}
int comb(int a, int b){
    return fact(a) / (fact(b) * fact(a-b));
}

int main(){
    int n, r, ncr;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of r :");
    scanf("%d",&r);
    ncr = comb(n, r);
    printf("n factorial is = %d\n",fact(n));
    printf("r factorial is = %d\n",fact(r));
    printf("n-r factorial is = %d\n",fact(n-r));
    printf("nCr is = %d",ncr);
    
    return 0;
}