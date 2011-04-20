#include "common.hh"

void insertsort()
{
    for (int *p = a + 1; p != a + n; ++p) 
    {
        int temp = *p; 
        int *q;
        for (q = p - 1; q >= a; --q)
        {
            if (*q > temp)
            {
                *(q + 1) = *q;
            }
            else
            {
                break;
            }
        }
        *(q + 1) = temp;
    }
}

int main(int argc, char *argv[])
{
    if (init(argc, argv) == 0)
    {
        insertsort();
        output();
        return 0;
    } 
    return 1;
}
