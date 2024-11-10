// WAP to count no. of letters in a word in given string.

// #include<stdio.h>

// int main(){
//     int a[100], count = 0;
//     printf("Enter any sentence :");
//     scanf("%[^\n]s",a);
//     for (int i = 0; a[i] != '\0'; i++) {
//         count++;
//     }
//     printf("Number of letters are = %d",count); // Spaces are also being included with letters as they also a type of characters.
//     return 0;
// }

// To exlude those spaces:


#include<stdio.h>

int main(){
    char a[100], count = 0, space = 0;
    printf("Enter any sentence :");
    scanf("%[^\n]s",a);
    for (int i = 0; a[i] != '\0'; i++) {
        if(a[i] == ' ') space++;
        else count++;
    }
    printf("Number of letters are = %d\n",count); 
    printf("Number of spaces are = %d\n",space); 
    printf("Number of spaces and alphabets both = %d\n",count+space);
    return 0;
}