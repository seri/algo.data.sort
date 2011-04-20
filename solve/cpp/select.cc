#include "common.hh"

void selectsort(int *beg, int *end)
{
    while (beg != end - 1)
    { 
        int *min = beg;
        for (int *p = beg + 1; p != end; ++p) 
            if (*p < *min) min = p;
        swapp(beg++, min);
    } 
}

int main(int argc, char *argv[])
{
    if (init(argc, argv) == 0)
    {
        selectsort(a, a + n);
        output();
        return 0;
    }
    return 1;
}
