//
// Created by Andrei Paul Ionescu on 18/11/2022.
//

// Custom libraries headers.
#include "association-table.h"
#include "../utilities/utilities.h"

// Standard library headers.

/////////////////////////////
// MACRO/LITERAL CONSTANTS //
/////////////////////////////

#define INITIAL_CAPACITY (size_t) 512

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

extern association new_association(void * key, supported_types key_data_type, void * value, supported_types value_data_type){

    association * new_association = memory_allocation_wrapper(malloc, sizeof(association));

    new_association->key = key;
    new_association->key_data_type = key_data_type;
    new_association->value = value;
    new_association->value_data_type = value_data_type;

    return *new_association;
}

extern void * get_key_of(association target) {

    return target.key;
//    switch (target.key_data_type) {
//        case STRING: return (char *) target.key;
//        default: return target.key;
//    }
}
extern void * get_value_of(association target) {return target.value;}

extern supported_types get_key_data_type_of(association target) {return target.key_data_type;}
extern supported_types get_value_data_type_of(association target) {return target.value_data_type;}