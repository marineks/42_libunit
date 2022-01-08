#include <libunit.h>
#include <string.h>

int an_awesome_dummy_test_function(void)
{
  printf("OK\n");
  if(1)
    return (0);
  else /* this dumb test fails */
    return (-1);
}

int main() {
  t_unit_test testlist = { .size = 0, .function_name="STRLEN", .head=NULL}; // = (t_unit_test){ .size=142, .pf_test=NULL };
  load_test(&testlist, "Basic test", &an_awesome_dummy_test_function);
  launch_tests(&testlist);
}
