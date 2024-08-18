#include<stdio.h>

int main(){
    int x, n, d;
    scanf("%d",&n);
    if(n<=50) printf("No discount");
    else if (n<100){ 
        printf("10% /discount");
        d = x*0.5;
        }
    else if (n==101 && n<=200) printf("20% /discount");
    else if (n==201 && n<=400) printf("30% /discount");
    else if (n==401 && n<=500) printf("40% /discount");
    else if (n>500) printf("50% /discount");
    
    
    return 0;
}