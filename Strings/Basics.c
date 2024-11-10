/* String - Array of characters

Declaration - char a[size];

Special property using string :
(\0) Null character - used to indicate end of the string.
Storing Null character takes extra space in memory.
Hence, memory allocation for m size of string takes m+1 memory.
String - 1. Single word string - Contains a single word not more than that.
         2. Multi word string - Conatins more than one word.

Take input int int - scanf("%d",a);
Take input in strings - scanf("%d[^\n]s", a);  here \n in [] means to take input in string until the next line begins.
To print - printf("%s",a);

*/


// WAP to ask the user to enter his name and display hello ____(username).

#include<stdio.h>

int main(){
    char a[10];
    printf("Enter your username :");
    scanf("%[^\n]s", a);
    printf("Hello %s",a);
    return 0;
}

// To count no. of vowels in a given string.
// To count no. of words in a given string.
// To count no. of lower cases, upper cases, no. of digits & no. of special symbols in a email I'd.(Email I'd should be taken in input by the user)
// To check whether the given string is palindorme or not.
// To convert each alphabet from upper to lower case & lower to upper case or flip every alphabets in the string.
// Encrypt the password which is taken as input. If the letter is a vowel then replace it with previous letter and if the letter in the pass is a consonent then replace it with the next aplhabet. Do for every single alphabet in pass.
// For ex: pass - telugu, 
// previuos aplhabet should be replace the vowels: e -> d, u -> t, 
// Next aplhabet should be replace the consonents: t -> u, l -> m, g -> h
// Now, encrypted pass is = udmtht
// To ask the user to enter first and last name and display it together.
// Display the given sentence in reverse order with respect to words. For ex - My name is Raj. Output - Raj is name My.
// Display each word in teh sentece in reverse order. For ex - My name is Raj. Output - jaR si eman yM.
// To sort array of names
// To count no. of characters given in the string.

// How to count numeber of letters:

#include<stdio.h>

int main(){
    char a[10], count = 0;
    printf("Enter your username :");
    scanf("%[^\n]s", a);
    printf("Hello %s",a);

    // Loop condition is used as a[i] != '\0' because everything which we have given input
    // with that only operations needs to be done and we know that null ('\0') is the last characeter
    // So, put the condition as null char only.
    for (int i = 0; a[i] != '\0'; i++) count++;
    printf("Number of Letter are = %d",count);
    return 0;
}