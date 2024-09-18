// Print the Amstrong number ranging from 0-500.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int digits = 0, sum = 0, rev = 0, ams = 0, m = n, original = n;
    while (n != 0) {
        int rem = n % 10;
        digits++;
        sum = sum + rem;
        // Reversing the number
        rev = (rev*10) + rem;  
        // Eliminating the last number
        n = n / 10;     
    }
    while (m != 0) {
        ams += pow(m%10, digits);
        m = m / 10;
    }
    if (original == ams)
    return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int count = 0, m = n, Amstrong, digits = 0;
    while (n != 0){
            int remainder = n % 10;
            count++;
            int rev = (rev * 10) + remainder;
            n = n / 10;
    }
    printf("Reversed number is :%d",count);
        while (m != 0){
            Amstrong += pow(m % 10,digits);
        }
        
    return 0;
}