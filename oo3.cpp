#include <cstdlib>
#include <iostream>
using namespace std;
// addition and multiplication of 2 complex no using friend function.
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
    friend test operator+(test &, test &);
    friend test operator*(test &, test &);

    void display()
    {
        if (b > 0)
            cout << "Imaginary no.= " << a << "+i" << b << endl;
        else if (b < 0)
            cout << "Imaginary no.= " << a << "-i" << abs(b) << endl;
        else
            cin >> a;
    }
};
test operator+(test &t1, test &t2)
{
    test t3(0, 0);
    t3.a = t1.a + t2.a;
    t3.b = t1.b + t2.b;
    return t3;
}
test operator*(test &t1, test &t2)
{
    test t4(0, 0);
    t4.a = (t1.a * t2.a) - (t1.b * t2.b);
    t4.b = (t1.a * t2.b) + (t1.b * t2.a);
    return t4;
}
int main()
{
    test t1(2, 3), t2(1, 4), t3(0, 0), t4(0, 0);
    t3 = t1 + t2;
    t4 = t1 * t2;
    cout << "On Addition :" << endl;
    t3.display();
    cout << "On Multiplication :" << endl;
    t4.display();
    return 0;
}
