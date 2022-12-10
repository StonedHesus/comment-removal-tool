//
// Created by Andrei Paul Ionescu on 18/11/2022.
//

#ifndef COMMENT_REMOVAL_TOOL_ASSOCIATION_TABLE_H
#define COMMENT_REMOVAL_TOOL_ASSOCIATION_TABLE_H

#include <stddef.h>
#include "../compiler-directives/compiler-directives.h"
#include "../association/association.h"

typedef struct association_table{
    size_t capacity;
    size_t currently_used;
    size_t current_index; // so as to allow utilising the table as a stream.
    association * associations;
}association_table;

// A wrapper for the static __new_association_table which returns always an array of INITIAL_CAPACITY size.
// Where INITIAL_CAPACITY is a local constant defined within the bounds of the association-table.c unit.
extern association_table new_association_table(void) result_use_check;

extern association * get_associations_from(association_table target) result_use_check reinforce_non_null_arguments_condition;
extern size_t  get_capacity_of(association_table target) result_use_check reinforce_non_null_arguments_condition;
extern size_t  get_currently_used_count_of(association_table target) result_use_check reinforce_non_null_arguments_condition;
extern size_t  get_current_index_of(association_table target) result_use_check reinforce_non_null_arguments_condition;
extern association * get_next_association_from(association_table target) result_use_check reinforce_non_null_arguments_condition;

#endif //COMMENT_REMOVAL_TOOL_ASSOCIATION_TABLE_H
