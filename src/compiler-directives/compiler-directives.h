//
// Created by Andrei Paul Ionescu on 18/11/2022.
//

#ifndef COMMENT_REMOVAL_TOOL_COMPILER_DIRECTIVES_H
#define COMMENT_REMOVAL_TOOL_COMPILER_DIRECTIVES_H

/*
 * This here define statement declares a compiler directive whose role is to raise a warning if,
 * and only if the return value of the method whose prototype specifies this here directive return
 * value is ignored by the user.
 *
 * This allows us to reinforce user's behaviour, so that no side effects will be left out.
 *
 * In addition to this, the warning will also be caught and interpreted by most IDEs, prior to the
 * compilation phase of the project.
 *
 * Author: Andrei-Paul Ionescu.
 */
#define result_use_check __attribute__((__warn_unused_result__))

/**
 * This here define statement declares a compiler directive whose role is to raise a warning, if
 * and only one of the arguments within the signature of the method to which the directive is
 * applied, is NULL.
 *
 * This allows us to reinforce user's behaviour, so that no malicious or undocumented behaviour will
 * propagate itself within the software.
 *
 * In addition to this, the warning will also be caught and interpreted by most IDEs, prior to the
 * compilation phase of the project.
 *
 * Author: Andrei-Paul Ionescu.
 */
#define reinforce_non_null_arguments_condition __attribute__((nonnull))

#endif //COMMENT_REMOVAL_TOOL_COMPILER_DIRECTIVES_H
