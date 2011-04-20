extern int *a;
extern int n;

int init(int argc, char *argv[]);
void output();
void output(int *result, int len);

template <typename T>
inline void swapp(T *p, T *q)
{
    T temp = *p;
    *p = *q;
    *q = temp;
}

inline void swapi(int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
