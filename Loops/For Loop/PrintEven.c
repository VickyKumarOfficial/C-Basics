// #include<stdio.h>
// int main(){
//     for ( int i = 1; i <= 100; i++){
//         if (i%2==0) printf("%d ", &i);
//     }

//     return 0;
// }

//EFFECEINT CODE

#include<stdio.h>
int main(){
    for ( int i = 0; i <= 100; i=i+2) printf("%d ",i);
    
    return 0;
}