#include <stdio.h>
#include <stdint.h>
#include "libft/libft.h"

typedef enum e_status {
		       STATUS_OK,
		       STATUS_KO,
		       STATUS_SIGSEGV,
		       STATUS_SIGABRT
} t_status;

typedef struct s_test {
  int(*pf_test)(void);
  char *testname;
  t_status status;
} t_test;

typedef struct s_unit_test {
  size_t size;
  char *function_name;
  t_list *head;
} t_unit_test;

int launch_tests(t_unit_test *tests);
void load_test(t_unit_test *tests, const char *testname, int(*pf_test)(void));
