#include "common.hh"

void swiftdown(int k, int last) {
    int i = k*2 + 1;
    if (i > last) return;
    if (i + 1 <= last && a[i + 1] > a[i]) ++i;
    if (a[i] > a[k]) {
        swapi(i, k);
        swiftdown(i, last);
    }
} 

void heapsort() {
    int last = n - 1;
    for (int i = n/2; i >= 0; --i) {
        swiftdown(i, last);
    }
    while (last != 0) {
        swapi(0, last);
        --last;
        swiftdown(0, last);
    } 
}

int main(int argc, char *argv[]) {
    if (init(argc, argv) == 0) {
        heapsort();
        output();
        return 0;
    }
    return 1;
}
