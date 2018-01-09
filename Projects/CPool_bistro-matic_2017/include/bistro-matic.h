/*
** EPITECH PROJECT, 2017
** bistro-matic header
** File description:
** Header file bistro-matic
*/

#ifndef BISTRO_MATIC_H
#define BISTRO_MATIC_H

#define OP_OPEN_PARENT_IDX			0
#define OP_CLOSE_PARENT_IDX			1
#define OP_PLUS_IDX				2
#define OP_SUB_IDX				3
#define OP_NEG_IDX				3
#define OP_MULT_IDX				4
#define OP_DIV_IDX				5
#define OP_MOD_IDX				6

#define EXIT_USAGE				84
#define EXIT_BASE				84
#define EXIT_SIZE_NEG				84
#define EXIT_MALLOC				84
#define EXIT_READ				84
#define EXIT_OPS				84

#define EXIT_SUCCESS				0

#define SYNTAX_ERROR_MSG			"syntax error"
#define ERROR_MSG				"error"

typedef struct base {
	char def;
	char num;
} base_t;

typedef struct operator {
	char def;
	char oper;
} operator_t;

#endif
