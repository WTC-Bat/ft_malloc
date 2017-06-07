#include "ft_malloc.hpp"

int     main(void)
{
    int     pgsz = getpagesize();
    void    *frtst = NULL;
    size_t  sztst = 42;

    printf("%d\n", pgsz);

    ft_malloc(sztst);
    ft_realloc(frtst, sztst);
    ft_free(&frtst);

    return (0);
}