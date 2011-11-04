#include "common.hh"

void insertsort(int step) { 
    for (int i = step; i < n; i += step) { 
        int temp = a[i];
        int j = i;
        while (j >= step && a[j - step] > temp) { 
            a[j] = a[j - step];
            j -= step;
        }
        a[j] = temp;
    }
} 

void shellsort() {
    int steps[] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
    for (int i = 8; i >= 0; --i) {
        insertsort(steps[i]);
    }
}

int main(int argc, char *argv[]) {
    if (init(argc, argv) == 0) {
        shellsort();
        output();
        return 0;
    }
    return 1;
}
