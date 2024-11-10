// Count the number of vowels in the given word.

#include<stdio.h>

int main(){
    char ch[100], count = 0;
    char v[20] = {'a', 'A', 'e', 'E', 'i', 'I', 'O','o', 'U', 'u'};
    printf("Enter the word :");
    scanf("%s", ch);
    for (int i = 0; ch <= '\0'; i++) {
        if (ch[i] == v[i]) count++;
    }
    printf("%d",count);
    
    return 0;
}