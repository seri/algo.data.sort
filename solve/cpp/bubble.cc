#include "common.hh"

void bubblesort() {
    for (int *p = a; p != a + n - 1; ++p) {
        for (int *q = p + 1; q != a + n; ++q) {
            if (*p > *q) {
                swapp(p, q);
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (init(argc, argv) == 0) { 
        bubblesort();
        output();
        return 0;
    }
    return 1;
}
