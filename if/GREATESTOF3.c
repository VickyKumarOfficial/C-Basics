// #include <stdio.h>

// int main(){
//     int n1, n2, n3;
//     printf("Enter any number :");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     if (n1 > n2 && n2 > n3){
//         printf("%d n1 is the greatest",n1);
//     }
//     else if (n2 > n1){
//             printf("n2 is the greatest");
//     }
//     else {
//         printf("n3 is the greatest");
//     }
//     return 0;
// }

// OR Better code and with 4 numbers input.


#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("Enter 3rd number :");
    scanf("%d",&c);
    printf("Enter 4th number :");
    scanf("%d",&d);
    if (a>b && a>c && a>d )
        printf("%d is the greatest number",a);
        
    else if (b>a && b>c && b>d){
        printf("%d is the greatest number",b);
    }
        
       else if (c>a && c>b && c>d)
            printf("%d is the greatest number",c);
        
            else if (d>a && d>b && d>c)
                printf("%d is the greatest number",d);
        
    return 0;

}