#include<stdio.h>

int main(){
    int n = 5, a = 0;
    if (n == 1) printf("Yes");
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                a = 1;
                break;
            }
            //
        }
        if (a) printf("Not");
        else printf("Yes");
    }
    
    return 0;
}