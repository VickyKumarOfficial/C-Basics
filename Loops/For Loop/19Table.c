// WAP to display multiplication table of user's choice (Table size os also given by user


#include<stdio.h>
int main(){
    int n, s, r;
    printf("Enter table number and the size of the table :");
    scanf("%d%d",&n,&s);
    for (int i = 1; i <= s; i++)
    {
        r=i*n;
        printf("%d * %d = %d\n",n,i,r);
    }
    
    return 0;
}