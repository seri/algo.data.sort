#include <iostream>
#include <fstream>
using namespace std; 

ifstream ifs;

bool check()
{
    int n; ifs >> n; 
    int count = 0;
    int cur, last = -1;
    while (true)
    {
        ifs >> cur;
        if (ifs.eof()) break;
        if (cur < last) return false;
        last = cur; 
        ++count;
    } 
    return count == n;
}

int main(int argc, char* argv[]) 
{
    if (argc < 2)
    {
        cerr << "Usage: check <filename>" << endl;
        return 1;
    } 
    try
    {
        ifs.open(argv[1]);
        bool ok = check();
        ifs.close();
        cout << (ok ? "Passed" : "Failed") << endl;
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}
