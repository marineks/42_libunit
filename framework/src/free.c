#include <libunit.h>

void	free_tests(t_unit_test *tests)
{
	if (tests)
	{
		free(tests);
	}
}