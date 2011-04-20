#include "common.hh"

void arrange(int *beg, int *end, int *tar, int base, int digit)
{
    for (int r = 0; r != base; ++r)
        for (int *p = beg; p != end; ++p)
            if (((*p) / digit) % base == r)
                *tar++ = *p;
} 

void radixsort(int base)
{
    int digit = 1;
    int *b = new int[n];
    for (int i = 0; i != 8; ++i)
    {
        if (i%2 == 0)
            arrange(a, a + n, b, base, digit);
        else
            arrange(b, b + n, a, base, digit);
        digit *= base;
    }
    delete b;
}

int main(int argc, char *argv[])
{
    if (init(argc, argv) == 0)
    {
        radixsort(10);
        output();
        return 0;
    }
    return 1;
}
