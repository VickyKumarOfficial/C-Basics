// Passing arrays to functions.

#include<stdio.h>
void fun(int a[]){
    a[0] = 34;
    return;
}

int main(){
    int a[5] = {1, 2, 4, 5, 6};
    printf("%d\n",a[0]);
    fun(a);
    printf("%d",a[0]);  // If know the pointers concept than it is easy to understand
                        // that we are passing by reference and we are not using pointers
                        // to change the value in same address hence, value will be changed
                        // if pointers were used then values will not be changed. Ex taken below
    return 0;
}


#include<stdio.h>
void fun(int a){
    a = 34;
    return;
}

// Here values will not be changed as above void block has different a variable in different 
// memory in the ram so void and main both the blocks are different.
int main(){
    int a = 5;
    printf("%d\n",a);
    fun(a);
    printf("%d",a);
    return 0;
}

// Similarly

#include<stdio.h>
void fun(int* a){
    *a = 34;
    return;
}

// Here values will be changed as we used pointers where values will be changed in the same address.
int main(){
    int a = 5;
    printf("%d\n",a);
    fun(&a);
    printf("%d",a);
    return 0;
}