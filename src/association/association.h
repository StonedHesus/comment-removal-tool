//
// Created by Andrei Paul Ionescu on 20/11/2022.
//

#ifndef COMMENT_REMOVAL_TOOL_ASSOCIATION_H
#define COMMENT_REMOVAL_TOOL_ASSOCIATION_H

#include "../compiler-directives/compiler-directives.h"

typedef enum supported_types{
    CHAR,
    INT,
    DOUBLE,
    STRING,
    ARRAY_OF_STRINGS
} supported_types;

typedef struct association{
    void * key;
    supported_types key_data_type;

    void * value;
    supported_types value_data_type;
} association;

extern association new_association(void *, supported_types, void *, supported_types) result_use_check reinforce_non_null_arguments_condition;

extern void * get_key_of(association) result_use_check reinforce_non_null_arguments_condition;
extern void * get_value_of(association) result_use_check reinforce_non_null_arguments_condition;

extern supported_types get_key_data_type_of(association) result_use_check reinforce_non_null_arguments_condition;
extern supported_types get_value_data_type_of(association) result_use_check reinforce_non_null_arguments_condition;

#endif //COMMENT_REMOVAL_TOOL_ASSOCIATION_H
