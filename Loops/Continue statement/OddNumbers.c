#include<stdio.h>
int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i%2!=0){
            printf("%d ",i);
        }
        
    }
    
    return 0;
}

// We can also print even or odd numbers by changing the condition by i=i+2 / i=i+1
// This above code is a normal way to print odd numbers. Now how to use continue statement:
// This continue statement is just an alternate method to print alternate numbers (Even or Odd)

#include<stdio.h>
int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i%2==0){
            continue;   // Here this continue satement works like; i ko 2 se divide karo and should be equal to zero.
                        // For example, i starting from 1 so 1%2 is not equal to zero then compiler comes to continues statement from where it operates to continue.
                        // matlab vo 1%2 skip ho jayega and next print ho jayega. Basically continue here means skip.          
        }
        printf("%d ",i);
    }
    
    return 0;
}
