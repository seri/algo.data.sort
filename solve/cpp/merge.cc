#include "common.hh"

int *b;

void merge(int *x1, int *x2, int *y1, int *y2)
{
    int *p = b, *x = x1, *y = y1;
    while (true)
    {
        if (*x <= *y)
        {
            *p++ = *x++;
            if (x > x2)
            {
                while (y <= y2) *p++ = *y++;
                break;
            }
        } 
        else 
        {
            *p++ = *y++;
            if (y > y2)
            {
                while (x <= x2) *p++ = *x++;
                break;
            }
        } 
    }
    while (y2 >= x1) *y2-- = *--p;
} 

void mergesort(int *lo, int *hi)
{
    int *p = lo + (hi - lo)/2;
    int *q = p + 1;
    if (p > lo) mergesort(lo, p);
    if (q < hi) mergesort(q, hi);
    merge(lo, p, q, hi);
}

int main(int argc, char *argv[])
{
    if (init(argc, argv) == 0)
    {
        b = new int[n];
        mergesort(a, a + n - 1);
        delete b;
        output();
        return 0;
    }
    return 1;
}
