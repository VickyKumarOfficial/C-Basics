#include<stdio.h>

int main(){
    int n1, n2, j, count;
    printf("Enter any two number where you want to find prime nos. between them :");
    scanf("%d %d",&n1,&n2);
    for (int i = n1; i <= n2; i++)
    {
        for (j = 2; j <= i/2; j++)
        {
            if(i%j==0)
            break;
        }
        if(!(j<=i/2)){
        printf("%d ",i);
        count++;
        }
    }
    printf("\n");
    printf("Number of prime numbers are :%d",count);
    return 0;
}