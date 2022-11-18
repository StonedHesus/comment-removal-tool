//
// Created by Andrei Paul Ionescu on 18/11/2022.
//

// Custom libraries headers.
#include "parser.h"
#include "../association-table/association-table.h"

// Standard library headers.
#include <stdio.h>

static const char * CRT_USAGE = "(filename | path-to-file)+ --customComments='[]@' ";

static char ** targets = "";

extern void check_command_line_arguments(const char ** args, int argc){
    if(argc == 1){
        fprintf(stderr, "Usage: %s", CRT_USAGE);
    }
}