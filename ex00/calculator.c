#include "main.h"



user_choices get_user_choice(void);
void perform_operation(void);

void calculator(void)
{
	calc_state state;
	state = _ON;
	t_bool showhelp;

	showhelp = TRUE;
	user_choices choice;


	while (state == _ON)
	{
		if (showhelp)
		{
			print_help(HELPMESSAGE);
			showhelp = FALSE;
		}

		choice = get_user_choice();

		switch (choice)
		{
			case _quit:
				state = _OFF;
				break;
			case _help:
				print_manual(USERMANUAL);
				print_help(HELPMESSAGE);
				break;
			case _continue:
				perform_operation();
				break;
			default :
				print_help(HELPMESSAGE);
				break;

		}
	}
}





void perform_operation(void)
{
	int num1;
	int num2;
	char op;

	int (*oprs[])(int nb1, int nb2) = 
	{
		addition,
		subtraction,
		division,
		multiplication,
		modulo,
	};

	printf("Input : ");
	scanf(" %d,%d,%c", &num1, &num2, &op);


	switch (op)
	{
		case '+':
			oprs[_addition](num1, num2);
			break;
		case '-':
			oprs[_subtraction](num1, num2);
			break;
		case '/':
			if (num2 == 0)
				printf("Error: Division by zero!\n");
			else 
				oprs[_division](num1, num2);
			break;
		case '*':
			oprs[_multiplication](num1, num2);
			break;
		case '%':
			oprs[_modulo](num1, num2);
			break;
		default:
			printf("Unknown operation !\n");
			break;
	}
}



user_choices get_user_choice(void)
{
	char op;

	user_choices choice;

	printf("Enter Your Choice : ");
	scanf(" %c", &op);

	switch(op)
	{
		case ('q'):
			choice = _quit;
			break;
		case ('c'):
			choice = _continue;
			break;

		case ('h'):
			choice = _help;
			break;

		default:
			choice = _unknown;
			break;
	}
	return (choice);
}
