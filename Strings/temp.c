// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int main(){
//     char arr[101];
//     printf("Enter string");
//     scanf("%[^\n]s", arr);
//     for (int i = 0; arr[i]; i++) {
//         // arr[i] = tolower(arr[i]);
//         // arr[i] = toupper(arr[i]);
//         // arr[i] = islower
//         arr[i] = arr[i]+32;
//     }
//     printf("%s",arr);
    
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char str[100];

//     printf("Enter a string in lowercase: ");
//     scanf("%[^\n]s",str);

//     // Convert string to uppercase
//     for (int i = 0; str[i]; i++) {
//         if (str[i] >= 97 && str[i] <= 122) {
//             str[i] = str[i] - 32;
//         }
//     }

//     printf("String in uppercase: %s", str);

//     return 0;
// }
// Above code is wrong

/*write a c program to convert a given string in lowercase to uppercase*/

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];

//     printf("Enter a string in lowercase: ");
//     scanf("%[^\n]s", str);
//     // fgets(str, sizeof(str), stdin);

//     // Convert string to uppercase
//     for (int i = 0; str[i]; i++) {
//         if (islower(str[i])) {
//             str[i] = toupper(str[i]);
//         }
//     }

//     printf("String in uppercase: %s", str);

//     return 0;
// }