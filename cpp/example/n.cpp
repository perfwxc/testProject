#include <iostream>
using namespace std;

void func1()
{
    func1();
    cout << 666 << endl;
}

void func2(int a)
{
    func1();
    cout << 666 << endl;
}

void func3(int a, int b)
{
    func1();
    func2(1);
    cout << 666 << endl;
}

int main()
{
    func1();
    func2(1);
    func3(1, 2);
    return 0;
}