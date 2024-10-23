//  basic of functions how it is written!

#include<stdio.h> // This will always be on top as it is an library function.
//  after library function changes will be there.

// Ignore extra spaces for easy understanding, not making it clumpsy.
void hw(){
    
    printf("Honey Singh, ");
    
    printf("How are you?\n");
    
    return;   // If declared before any statement further statements won't run. 
}

int main(){     // 'main' function will always run first, doesn't matter even it is written after n no. of void functions.
   printf("Yo Yo\n");
    hw();   // This is known as "call" function. and down also same as follows as many times written the same
            // This 'hw' will got to "void hw" function and operate the task given in that ("void hw()") block first.
            // This first call function will not go on to another until and unless 
            // first operation in over. Call function is the function which calls the specific function
            // like in this case "hw()" is the call function and calls the function "void hw()".
            // Once first call function is operated successfully then by the help of return the compiller
            // again comes to 'int main()' block and continues from where it left. 
    
    hw();
    
    hw();
    return 0;
}