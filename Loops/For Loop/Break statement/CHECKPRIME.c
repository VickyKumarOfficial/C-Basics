// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for (int i = 2; i <= n-1; i++)
//     {
//         if (n%i==0){              // Here "n%i==0" ka mtlb hai ki, n is the integer which we input and i is the number
//         // which is an number in loop that starts form 'i=2' and keeps increasing to check the n value whether it's prime or not 
//             printf("This is a Composite number");
//             break;
//         }
//         else{
//             printf("The is a Prime number");
//             break;
//         }    
//     }

//     return 0;
// }

// // Other method - If don't want to compare n value with i:

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     // Take a new variable and compare like in If-else lecture:
//     int a = 0;
//     for (int i = 2; i <= n-1; i++){
//         if (n%i==0)
//             a=1;
//             break;
//         }
//         if (n==1){
//             printf("Neither Prime nor Composite number");
//         }
//         else if (a==0) printf("This is an prime number");
        
//         else
//             printf("This is an odd number");
        
//     return 0;
// }

#include <stdio.h>

int main() {
    int n= 25;      
    int o= 0, p;           
    char s;             

    for (int i = 1; i <= n; ++i) {
        
        printf("interview %d: ", i);
        printf("selected (Y/N): ");
        scanf(" %c", &s);

        if (s == 'Y' || s == 'y') {
            printf("Enter the package offered to you: ");
            scanf("%d", &p);
            o++;

            if (o == 5) { 
                printf("offer %d has accepted the package of %d\n", o, p);
                break;
            }

            if (p > 100000) {
                printf("offer accepted package of %d. You are not allowed to face further interviews\n", p);
                break;
            } 
            else printf("offer with package of %d received. you are allow to continuing the next interviews\n", p);
        } 
        else printf("Not selected. continuing the next interview.\n");
        
    }

    if (o < 5) printf("Number of offers received: %d\n", o);

    printf("interviews ended.\n");
    return 0;
}