//
// Created by Andrei Paul Ionescu on 18/11/2022.
//

// Custom libraries headers.
#include "utilities.h"
// Standard library headers.
#include <stdio.h>

extern void * memory_allocation_wrapper(void * function(size_t), size_t size){

    //TODO: DETERMINE WHETHER IT IS POSSIBLE TO CHECK WHICH FUNCTION WAS PASSED, SO AS TO BE
    // ABLE TO IDENTIFY A CALLOC FOR INSTANCE, AND PROVIDE IT WITH THE EXTRA ARGUMENT IT TAKES!

    void * memory = function(size);

    if(memory == NULL){
        fputs
        (
                "An error occurred whilst allocating the required memory, please ensure that either"
                " the code was properly managed, or that enough volatile memory exists on your "
                "machine so as to allow the program to perform its duties.", stderr
        );

        exit(2);
    }

    return memory;
}