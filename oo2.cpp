#include <iostream>
using namespace std;
class test
{
private:
    int a, b;

public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void operator++(test &);
    friend void operator++(test &, int);
    void show()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
void operator++(test &t)
{
    ++t.a;
    ++t.b;
}
void operator++(test &t, int)
{
    t.a++;
    t.b++;
}
int main()
{
    test t1(4, 5), t2(2, 3);
    t1++;
    ++t2;
    t1.show();
    t2.show();
    return 0;
}
