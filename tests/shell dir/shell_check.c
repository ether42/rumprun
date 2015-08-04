#include <stdio.h>
#include <string.h>
#include <libgen.h>
#include <rumprun/tester.h>

static char *expected_results[] = {
	/* simple example */
	"shell_check.bin",
	/* more complex one for testing rumprun, json escaping seems incorrect:
	   should be "'\"escaping\\\"'\" \"  test.bin" */
	";'\\\"escaping\\\"'\\\" \\\"  test.bin",
	NULL,
};

int
rumprun_test(int argc, char *argv[])
{
	char *name = basename(*argv);
	int i;

	/* for each expected result */
	for (i = 0; expected_results[i]; i++) {
		/* test if argv[0] is in expected results */
		if (!strcmp(name, expected_results[i])) {
			break;
		}
	}
	if (!expected_results[i]) {
		printf("%s not found in the list of expected results!\n", name);
		return 1;
	}
	return 0;
}
