#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0){                           // Here "n%i==0" ka mtlb hai ki, n is the integer which we input and i is the number
        // which is an number in loop that starts form 'i=2' and keeps increasing to check the n value whether it's prime or not
            printf("This is a Composite number");
            break;
        }
        else if (n == 1){
            printf("Neither prime nor Composite number");
            break;
        }
        else{
            printf("The is a Prime number");
            break;
        }    
    }

    return 0;
}

// Other method - If don't want to compare n value with i:

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 0;  // Take a new variable and compare like in If-else lecture:
    for (int i = 2; i <= n-1; i++){
        if (n%i==0)
            a=1;
            break;
        }
        if (n==1){
            printf("Neither Prime nor Composite number");
        }
        else if (a==0) printf("This is an prime number");
        
        else
            printf("This is an Composite number");
        
    return 0;
}







  

