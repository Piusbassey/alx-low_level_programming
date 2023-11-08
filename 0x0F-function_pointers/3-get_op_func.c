#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Description: This function returns a pointer to the function that
 * corresponds to the operator given as a parameter.
 * Example: get_op_func("+") should return a pointer to the function op_add
 *
 * Return: A pointer to the function that corresponds to the given operator.
 *         If s does not match any of the 5 expected operators (+, -, *, /, %),
 *         it returns NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
