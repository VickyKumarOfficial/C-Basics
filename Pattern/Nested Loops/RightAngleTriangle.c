// Q. WAP to print right angled traingle of '*' and by taking a number input for how many number of rows it should be.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int n,r,x;
    printf("enter a number:");
    scanf("%d",&n);


for(r=1;r<=n;r++)
{
    for(x=1;x<=r;x++)
    {
        printf("* ");
    }
    printf("\n");
}

    return 0;
}