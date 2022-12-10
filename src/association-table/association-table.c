//
// Created by Andrei Paul Ionescu on 18/11/2022.
//

// Custom libraries headers.
#include "association-table.h"
#include "../utilities/utilities.h"

// Standard library headers.

///////////////////////////////
/// MACRO/LITERAL CONSTANTS ///
//////////////////////////////

#define INITIAL_CAPACITY (size_t) 512

///////////////////////
/// Constructor(s) ///
//////////////////////
static association_table __new_association_table(size_t capacity){

    association_table * new_association_table = memory_allocation_wrapper(malloc, sizeof(association_table));

    new_association_table->capacity = capacity;
    new_association_table->currently_used = 0;
    new_association_table->current_index = 0;
    new_association_table->associations = memory_allocation_wrapper(malloc, sizeof(association) * capacity);

    return *new_association_table;
}

extern association_table new_association_table(void){
    return __new_association_table(INITIAL_CAPACITY);
}

///////////////////////
/// Getter methods ///
//////////////////////

extern association * get_associations_from(association_table target) {return target.associations;}
extern size_t get_capacity_of(association_table target) {return target.capacity;}
extern size_t get_currently_used_count_of(association_table target) {return target.currently_used;}
extern size_t get_current_index_of(association_table target) {return target.current_index;}
extern association * get_next_association_from(association_table target) {
    if(target.current_index > target.capacity) return NULL;
    else return &target.associations[target.current_index++];
}