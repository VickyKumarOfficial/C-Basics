#include<stdio.h>

int main(){
    FILE*ptr = fopen("Coding.txt","r");
    char str[1001];
    while (fgets(str,10,ptr)!=NULL){
        printf("%s",str);
    }
    fclose(ptr);
    return 0;
}
