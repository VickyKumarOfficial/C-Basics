// Q. WAP using function concept to choose any number of countries by making a list. 
#include<stdio.h>
    void Australia(){
        printf("You are in Australia");
        return;
    }
    void Switzerland(){
        printf("You are in Switzerland");
        return;
    }
    void Japan(){
        printf("You are in Japan");
        return;
    }
    void London(){
        printf("You are in London");
        return;
    }
    void India(){
        printf("You are in India");
        return;
    }
    void Romania(){
        printf("You are in Romania");
        return;
    }
int main(){
    int n;
    printf("choose any nnumber from 1 to 6 go any Place.\n");
    printf("1. Australia\n2. Switzreland\n3. Japan\n4. London\n5. India\n6. Romania\nChoose a number :");
    scanf("%d",&n);
    if (n==1) Australia();
    else if (n==2) Switzerland();
    else if (n==3) Japan();
    else if (n==4) London();
    else if (n==5) India();
    else if (n==6) Romania();
    else printf("Invalid number input!");
    return 0;
}