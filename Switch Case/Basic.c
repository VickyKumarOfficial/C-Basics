// Switch case - A menu driven program where list of choices can be shown and choosen by the users.
// Syntax of switch case statement:

// switch (expression)
// {
// case /* constant-expression */:
//     /* code */
//     break;

// default:
//     break;
    // default line is optional.
// }


// Write a C program to display the number given by the numbers in the word form.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    switch (n){
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;

        default: printf("Invalid input! You have given input more than 1 digit.");
    }
    return 0;
}

// Write a C program to display the numbers given by the users in the Roman numeral form.

#include<stdio.h>

int main(){
    int R;
    scanf("%d",&R);
    switch (R){
    case 1: printf("");
        break;
    
    default:
        break;
    }
    return 0;
}

// Write a C program to check whether the letter input from the user is vowel or not.