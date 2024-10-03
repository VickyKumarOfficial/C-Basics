//  basic of functions how it is written!

#include<stdio.h> // This will always be on top as it is an library function.
//  after library function changes will be there.

// Ignore extra spaces for easy understanding not making it clumpsy.
void hw(){
    
    printf("Hello world, ");
    
    printf("How are you?\n");
    
    return;   // If declared before any statement further statements won't run. 
}

int main(){     // 'main' function will always run first.
   
    hw();   // This is known as "call" function. and down also same as follows as many times written the same
            // This 'hw' will got to "void hw" function and operate the task given in that (hw function "void hw()") block first.
            // This first call function will not go on to another until and unless 
            // first operation in over. Once first call function is operated successfully then goes to 2nd one.
    
    hw();
    
    hw();
    return 0;
}