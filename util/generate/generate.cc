#include <iostream>
#include <fstream>
#include <sstream>
using namespace std; 

#include <cstdlib>
#include <ctime>

const int MAX = 1000000000;

ofstream ofs;
int n;

void init(string const& suffix)
{   
    ostringstream oss; 
    oss << n << "_" << suffix;
    ofs.open(oss.str().c_str());
    ofs << n << endl;
}

void final()
{
    ofs << endl;
    ofs.close();
}

void bestcase()
{   
    init("best"); 
    for (int i = 0; i != n; ++i)
    {
        ofs << i << " ";
    }
    final();
}

void worstcase()
{
    init("worst");
    for (int i = n; i != 0; --i)
    {
        ofs << i << " ";
    }
    final();
}

void randcase()
{ 
    for (int j = 0; j != 5; ++j)
    {
        ostringstream oss;
        oss << "rand" << (j + 1);
        init(oss.str()); 
        for (int i = 0; i != n; ++i)
        {
            ofs << (rand() % n) << " ";
        }
        final();
    }
}

int main(int argc, char* argv[])
{
    srand((unsigned)time(0)); 
    if (argc < 2)
    {
        cerr << "Usage: generate <size>" << endl;
        return 1;
    } 
    istringstream iss(argv[1]); 
    iss >> n;
    if (n < 1 || n > MAX)
    {
        cerr << "Constraint: 1 <= size <= MAX (got " << n << ")" << endl;        
        return 1;
    } 
    try
    { 
        bestcase();
        worstcase();
        randcase();
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
        return 1;
    } 
    return 0;
}
