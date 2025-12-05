#include "whatever.hpp"

void swap(void *v1, void *v2)
{
    void *tmp;
    tmp = v1;
    v1 = v2;
    v2 = tmp;
}

void *min(void *v1, void *v2)
{
    (void)v1;
    (void)v2;
    return 0;
}

void *max(void *v1, void *v2)
{
    (void)v1;
    (void)v2;
    return 0;
}
