// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     (n % 2 == 0) ? printf("it is an even number") : printf("it is an odd number");
//     return 0;
// }
#include<stdio.h>

int main(){
    int n1, n2, n3;
    printf("Enter numbers :");
    printf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2 && n2>n3){
        int average = (n1+n2)/2;
        printf("Your best average score is = %d",average);
    }
    else if (n3>n2 && n1>n2)
    {
        int average = (n3+n1)/2;
        printf("Your best average score is = %d",average);
    }
    else if (n3>n2 && n2>n1)
    {
        int average = (n3+n2)/2;
        printf("Your best average score is = %d",average);
    }
    return 0;
}