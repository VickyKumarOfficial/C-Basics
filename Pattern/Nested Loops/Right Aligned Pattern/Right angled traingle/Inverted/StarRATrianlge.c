// Q. WAP same as Right angled traingle but in inverted way.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= a; j++){   // In maths u can use -> i+j=n+1; j=n+1-i
            printf("* ");
        }
        a--;
        printf("\n");
    }
    
    return 0;
}

// Both code above and below are same just a bit of logic is different

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}