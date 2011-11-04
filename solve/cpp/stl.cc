#include "common.hh"
#include <algorithm>
using namespace std; 

int main(int argc, char *argv[]) {
    if (init(argc, argv) == 0) { 
        sort(a, a + n);
        output();
        return 0;
    }
    return 1;
}
