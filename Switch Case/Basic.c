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

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     switch (n){
//     case 1:
//         printf("One");
//         break;
//     case 2:
//         printf("Two");
//         break;
//     case 3:
//         printf("Three");
//         break;
//     case 4:
//         printf("Four");
//         break;
//     case 5:
//         printf("Five");
//         break;
//     case 6:
//         printf("Six");
//         break;
//     case 7:
//         printf("Seven");
//         break;
//     case 8:
//         printf("Eight");
//         break;
//     case 9:
//         printf("Nine");
//         break;

//         default: printf("Invalid input! You have given input more than 1 digit.");
//     }
//     return 0;
// }

// Write a C program to display the numbers given by the users in the Roman numeral form.

// #include<stdio.h>

// int main(){
//     int R;
//     printf("Enter any number :");
//     scanf("%d",&R);
//     switch (R){
//     case 1: printf("I");
//         break;
//     case 2: printf("II");
//         break;
//     case 3: printf("III");
//         break;
//     case 4: printf("IV");
//         break;
//     case 5: printf("V");
//         break;
//     case 6: printf("VI");
//         break;
//     case 7: printf("VII");
//         break;
//     case 8: printf("VIII");
//         break;
//     case 9: printf("IX");
//         break;
//     case 10: printf("X");
//         break;
//     default: printf("Value exceeds!");
//         break;
//     }
//     return 0; 
// }

// Write a C program to check whether the letter input from the user is vowel or not.

// #include<stdio.h>

// int main(){
//     char v;
//     printf("Enter any letter :");
//     scanf("%c",&v);
//     switch (v){
//     case 'a': printf("It is a vowel!");
//         break;
//     case 'A': printf("It is a vowel!");
//         break;
//     case 'e': printf("It is a vowel!");
//         break;
//     case 'E': printf("It is a vowel!");
//         break;
//     case 'i': printf("It is a vowel!");
//         break;
//     case 'I': printf("It is a vowel!");
//         break;
//     case 'o': printf("It is a vowel!");
//         break;
//     case 'O': printf("It is a vowel!");
//         break;
//     case 'u': printf("It is a vowel!");
//         break;
//     case 'U': printf("It is a vowel!");
//         break;
//     default: printf("Not a vowel it is a consonent");
//         break;
//     }
//     return 0; 
// }

// Q. Write a C program to find whether the given number is even or odd using switch case.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    switch (n%2)
    {
    case (0):
        printf("Number is even");
        break;
    case (1):
        printf("Number is odd");
        break;
    
    default: printf("Neither even nor odd");
        break;
    }
    return 0;
}