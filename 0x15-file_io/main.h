#ifndef _MAIN_H

#define _MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif