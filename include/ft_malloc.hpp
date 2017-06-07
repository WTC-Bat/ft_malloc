#include <iostream>
#include <stdlib.h>
// getpagesize()
#include <unistd.h>
// mmap(), munmap()
#include <sys/mman.h>
// getrlimit()
#include <sys/time.h>
#include <sys/resource.h>

void    ft_free(void *ptr);
void    *ft_malloc(size_t size);
void    *ft_realloc(void *ptr, size_t size);

