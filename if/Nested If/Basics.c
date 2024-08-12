// Q. Write a C program to test whether Ravi has won the game or not (The game is having two levels if he clears level 1 then he is allowed to play level 2. To clear level 1, score should be more than 70, to clear level 2, score should be more than 80).
// #include<stdio.h>

// int main(){
//     int L1;
//     printf("Enter lvl 1 score :");
//     scanf("%d",&L1);
//     if (L1>=70){
//         printf("Hurraayyy!!! you passed level 1 and can proceed to play level 2\n");
//         int L2;
//         printf("Enter lvl 2 score :");
//         scanf("%d",&L2);
//         if (L2>=80){
//             printf("Awesome! You passed level 2 and can go to level 3");
//         }
//         else printf("Not eligible to go to lvl 3");    
//     }
//     else printf("You can not go to lvl 2");
//     return 0;
// }
// Q. Write C program to test whether the given number is +ve or not. If it is +ve then find it's square & if the square is even then display even square otherwise display odd square. If the number is -ve find it's cube.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("It is an +ve number\n");
        int square = n*n;
        printf("and the square of this number is %d",square);
        if (square%10 == 0)
        {
            
        }
        
    }
    
    return 0;
}

// Q. Write a C program to test whether the person is he / she. Input can be taken by the user as M or F.

// Q. Write a C program to test whether person is allowed to ride giant weel or not (If age is between 13 and 59 is allowed, under 12 and above 60 are not allowed).
// Q. Write a C program to test whether person is selected for olympics or not in Javelline throw.
#include<stdio.h>

int main(){
    float d1,d2,d3;
    printf("Enter the distance thrown by 3 players :");
    scanf("%f%f%f",&d1,&d2,&d3);
    if (d1>=80){
        printf("The player is seleted for finals");
    }
    else printf("The player is disqualified");
    
    return 0;
}