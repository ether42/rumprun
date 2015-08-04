#include <stdio.h>

#include <rumprun/tester.h>

#if defined(__linux__) || !defined(__NetBSD__)
# error compiler wrapper fail
#endif

int
rumprun_test(int argc, char *argv[])
{
  int i;
  for (i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
