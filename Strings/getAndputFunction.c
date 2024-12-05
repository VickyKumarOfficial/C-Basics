#include<stdio.h>
#include<string.h>
int main(){
    char ch[500];
    // Each gets and puts function comes automitaclly in a new line when previous fucntion is executed.
    puts("Enter the string :");
    gets(ch);
    puts("The enterd value is = ");
    puts(ch);
    return 0;
}