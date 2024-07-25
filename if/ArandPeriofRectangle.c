// #include <stdio.h>

// int main(){
//     int l, b, Area;
//     printf("Enter l & b :");
//     scanf("%d %d",&l, &b);
//     Area = l * b;

//     int Perimeter;
//     printf("Enter l & b :");
//     scanf("%d %d",&l, &b);
//     Perimeter = 2*(l+b);

//     if (Area > Perimeter) {
//         printf("Area is greater");
//     }
    
//     else{
//         if (Perimeter > Area) {
//             printf("Perimeter is greater");
//         }
        
//     }
    
//     if (Perimeter == Area){
//         printf("Both are equal");
//     }
    
//     return 0;
// }

//Effeceint way to write


#include <stdio.h>

int main(){
    int l;
    printf("Enter a value for length :");
    scanf("%d",&l);
    
    int b;
    printf("Enter a value for breadth :");
    scanf("%d",&b);

    int Area = l*b;
    printf("Area is :%d\n", Area);
    
    int Perimeter = 2*(l+b);
    printf("Perimeter is :%d\n", Perimeter);

    if (Area > Perimeter){
        printf("Area is greater than Perimeter");
    } 
    else if (Perimeter > Area) {
        printf("Perimeter is greater than Area");
    }
    else{
        printf("Both are equal :)");
    }
     
    return 0;
}