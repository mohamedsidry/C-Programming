#ifndef MAIN_H
# define MAIN_H

#include <stdio.h>

void print_header(char *);
void print_manual(char *);
void print_help(char *);
void calculator(void);


int addition(int a, int b);
int subtraction(int a, int b);
int division(int a, int b);
int multiplication(int a, int b);
int modulo(int a, int b);


# define TRUE 1
# define FALSE 0
# define HEADERTITLE "\n------------- Arithmetic Calculator -------------\n"
# define USERMANUAL "\n-------------------------------------------------\n- Enter two numbers and the operation to preform.\n- Exemple 5, 3, +\n- Use ',' and ' ' to separate between numbers and operator.\n-------------------------------------------------\n"
# define HELPMESSAGE "\n-------------------------------------------------\n To QUIT enter q .\n To CONTINUE enter c \n For HELP inter h \n-------------------------------------------------\n"

typedef enum o_op
{
	_addition,
	_subtraction,
	_division,
	_multiplication,
	_modulo,
} operation;

typedef enum u_op
{
	_quit,
	_continue,
	_help,
	_unknown,

} user_choices;

typedef enum
{
	_OFF,
	_ON

} calc_state;

typedef int t_bool;
#endif
