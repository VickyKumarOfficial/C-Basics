#include<stdio.h>

void Australia(){
    printf("You are in Australia.\n");
    India();
    return;
}
void India(){
    printf("You are in India.\n");
    return;
}

int main(){
    Indore();
    return 0;
}

void Indore(){
    printf("You are in Indore.\n");
    Australia();
    return;
}