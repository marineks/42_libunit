#include "libunit.h"
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int launch_tests (t_unit_test *tests) 
{
	size_t size = tests->size;
	size_t i = 0;
	pid_t pid[size];
	int status;
	
	if (tests == NULL) 
	{
		// empty testlist, must call load_tests
		return (-1);
	}
	t_test *test = (t_test *)tests->head->content;
	while (i < size) 
	{
		pid[i] = fork();
		if (pid[i] == 0) 
		{
			printf("calling test:%d\n", (int)i);
			test->pf_test();
			exit(0);
		}
		wait(&status);
		if (WEXITSTATUS(status) == 0)
			test->status = STATUS_OK;
		printf("child returned %d\n", WEXITSTATUS(status));
		i++;
	}
  return (0);
}
