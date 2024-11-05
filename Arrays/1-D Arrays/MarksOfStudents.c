// Take input of 10 student's marks and print all the marks which ever is strictly lower than 35.

#include<stdio.h>
int main(){
    int marks[10]={12,56,87,59,97,78,80,67,99,88};  // Given Data

    // Or take the inputs
    
    // for(int i = 1; i <= 11-1; i++){
    //     printf("Enter the marks %d:",i);
    //     scanf("%d",&marks[i]);
    // }
    for(int i = 0; i < 10; i++){
        if(marks[i] < 35) printf("%d ",marks[i]);
    }
    
    return 0;
}

// Similarly if you are asked to print the index number of that element then:

#include<stdio.h>
int main(){
    int marks[10]={12,56,87,59,97,78,80,67,99,88};
    for(int i = 0; i < 10; i++){
        if(marks[i] < 35) {
            printf("%d ",i);        // For computers
            // printf("%d ",i+1);  // For human understanding

        }
    }
    
    return 0;
}