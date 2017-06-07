#include <iostream>

#include <stdio.h>

// getpagesize()
#include <unistd.h>

// mmap(), munmap()
#include <sys/mman.h>

// getrlimit()
#include <sys/time.h>
#include <sys/resource.h>

int     main(void)
{
    int     pgsz = getpagesize();

    // printf("%d", pgsz);

    return (0);
}