#include<stdio.h>
int factorial(int x){
    int nf=1;
    for(int i=2;i<=x;i++){
        nf*=i;
    }
    return nf;
}
int P(int n, int r){
    return factorial(n)/factorial(n-r);
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int r;
    printf("Enter r :");
    scanf("%d",&r);
    int nPr;
    if(n>r){
        nPr =  P(n,r);
    }
    else printf("Invalid input! Value of n must be greater than value of r.");
    printf("Permutaion is = %d",nPr);
    return 0;
}