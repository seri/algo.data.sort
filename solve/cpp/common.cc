#include "common.hh"
#include <iostream>
#include <fstream>
using namespace std;

int *a;
int n;
ofstream ofs;

int init(int argc, char *argv[])
{
    if (argc < 2)
    {
        cerr << "Usage: " << argv[0] << "<input-file> [output-file]" << endl;
        return 1;
    }
    try
    {
        ifstream ifs(argv[1]);
        ifs >> n;
        a = new int[n];
        for (int i = 0; i != n; ++i)
        {
            int j; ifs >> j;
            a[i] = j;
        }
        ifs.close();
        if (argc > 2) ofs.open(argv[2]);
                 else ofs.basic_ios<char>::rdbuf(cout.rdbuf());
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}

void output(int *result, int)
{
    ofs << n << endl;
    for (int i = 0; i != n; ++i)
    {
        ofs << a[i] << " ";
    }
    ofs << endl;
    ofs.close();
    delete a;
}

void output()
{
    output(a, n);
} 
