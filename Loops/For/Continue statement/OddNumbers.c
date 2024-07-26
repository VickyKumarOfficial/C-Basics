// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i%2!=0){
//             printf("%d ",i);
//         }
        
//     }
    
//     return 0;
// }

// We can also print even or odd numbers by changing the condition by i=i+2 / i=i+1
// This above code is a normal way to print odd numbers. Now how to use continue statement:
// This continue statement is just an alternate method to print alternate numbers (Even or Odd)

#include<stdio.h>
int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i%2==0){
            continue;
        }
        printf("%d ",i);
    }
    
    return 0;
}
