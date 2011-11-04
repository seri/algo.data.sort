#include "common.hh"

void quicksort(int *lo, int *hi) {
    int pivot = *(lo + (hi - lo)/2);
    int *i = lo, *j = hi;
    do {
        while (*i < pivot) ++i;
        while (*j > pivot) --j;
        if (i <= j) {
            swapp(i, j);
            ++i; --j;
        } 
    } while (i < j);
    if (i < hi) quicksort(i, hi);
    if (lo < j) quicksort(lo, j);
}

int main(int argc, char *argv[]) {
    if (init(argc, argv) == 0) {
        quicksort(a, a + n - 1);
        output();
        return 0;
    }
    return 1;
}
