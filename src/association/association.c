//
// Created by Andrei Paul Ionescu on 20/11/2022.
//

// Custom libraries headers.
#include "association.h"
#include "../utilities/utilities.h"
// Standard library headers.

///////////////////////////
///// Constructor(s) //////
//////////////////////////

/**
 * <p>
 *      This here routine serves as the constructor for a new association object.
 * </p>
 * <p>
 *      It expects the user to provide both the key, alongside with its datatype, and the value,
 *      once more, followed by its data type.
 * </p>
 * <p>
 *      The supported data types for association object are stored in a 'globally' reachable enumeration which is to be
 *      found within the association header unit.
 * </p>
 * @param key - a generic pointer of type void, which indicates a zone within the memory in which the key value for the association is stored.
 * @param key_data_type - the data type which the key has, this will allow us to retrieve the key without maliciously accessing reserved memory.
 * @param value - a generic pointer of type void, which indicates a zone within the memory in which the value of the association is stored.
 * @param value_data_type - the data type which the value field has, this will allow us to retrieve the value without maliciously accessing reserved memory.
 * @return {association} - a newly constructed association object (Note that it is an object and not a pointer to the address where the object is stored in memory).
 * @author Andrei-Paul Ionescu.
 */
extern association new_association(void * key, supported_types key_data_type, void * value, supported_types value_data_type){

    association * new_association = memory_allocation_wrapper(malloc, sizeof(association));

    new_association->key = key;
    new_association->key_data_type = key_data_type;
    new_association->value = value;
    new_association->value_data_type = value_data_type;

    return *new_association;
}

///////////////////////////
///// Getter methods //////
//////////////////////////

extern void * get_key_of(association target) {return target.key;}
extern void * get_value_of(association target) {return target.value;}

extern supported_types get_key_data_type_of(association target) {return target.key_data_type;}
extern supported_types get_value_data_type_of(association target) {return target.value_data_type;}