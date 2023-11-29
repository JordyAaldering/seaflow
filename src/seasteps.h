#ifndef _SEASTEPS_H_
#define _SEASTEPS_H_

#include <stdlib.h>

extern void a_file(const char *filepath, const char *contents);

extern int i_execute(const char *exec_path, const char *args, char **console_output);

extern int string_contains(const char *contents, const char *expected, size_t amount);
extern int string_does_not_contain(const char *contents, const char *expected);

#endif /* _SEASTEPS_H_ */