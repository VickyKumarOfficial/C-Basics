#include<stdio.h>
int main(){
    int n, a = 100;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a);
        a = a - 3;
    }
    
    return 0;
}

// Now if we want to print only till end positive integer (befor zero) So just need to change in for condition statement

#include<stdio.h>
int main(){
    int a = 100;
    for (int i = 0; a > 0; i++){
        printf("%d ",a);
        a = a - 3;
    }
    
    return 0;
}

//Similalry if we want in all negative values

#include<stdio.h>
int main(){
    int a = 100;
    for (int i = 0; a > 0; i++){
        printf("%d ",a);
        a = a - 3;
    }
    
    return 0;
}


#include<stdio.h>
int main(){
    float a = 100;
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++){
        printf("%f ",a);
        a = a / 2;
    }
    
    return 0;
}