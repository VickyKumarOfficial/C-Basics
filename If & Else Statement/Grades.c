//Grade A - >80
//Grade B - >70
//Grade C - >60
//Grade D - >50
//Grade E - >40

#include <stdio.h>
int main(){
    int x;
    printf("Enter you marks :");
    scanf("%d",&x);
    if (x>80)
        printf("Your grade is A");
    else if (x>70){
                printf("Your grade is B");
            }
    else if (x>60){
            printf("Your grade is C");
        }    
    else if (x>50){
            printf("Your grade is D");
        }
    
    else printf("Your grade is E");
    
    return 0;
}