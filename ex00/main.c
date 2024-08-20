#include "main.h"

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{

	print_header(HEADERTITLE);
	print_manual(USERMANUAL);
	
	
	calculator();

	return (0);
}
