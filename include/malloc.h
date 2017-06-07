#include <iostream>
#include <stdlib.h>
// getpagesize()
#include <unistd.h>
// mmap(), munmap()
#include <sys/mman.h>
// getrlimit()
#include <sys/time.h>
#include <sys/resource.h>

void    free(void *ptr);
void    malloc(size_t size);
void    realloc(void *ptr, size_t size);

