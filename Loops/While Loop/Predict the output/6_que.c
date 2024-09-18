#include <stdio.h>
int main(){
    while ('a'<'b'){
        printf("\nmalayalam is a palindrome");
    }
    
    return 0;
}

// ASCII value of a & b is 97 & 98 respectively. So a is always smaller than b. No changes are there to stop. Hence, "Infinite Loop".
