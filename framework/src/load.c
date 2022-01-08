#include "libunit.h"

void load_test(t_unit_test *tests, const char *testname, int(*pf_test)(void)) {
  if (!tests->size) {
    t_test *test = malloc(sizeof(t_test));
    if (!test)
      return;
    test->pf_test = pf_test;
    test->testname = ft_strdup(testname);
    test->status = STATUS_KO;
    t_list *node = ft_lstnew(test, sizeof(test));
    *tests = (t_unit_test){ .size = 1, .function_name="STRLEN", .head= node};
  }
  else {
    
  }
}
