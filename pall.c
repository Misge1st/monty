
#include "monty.h"


/**
 * pall - print elements in the stack
 * @stack: head
 * @line_cnt: amount of lines
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))

{
print_stack(*stack);
}
