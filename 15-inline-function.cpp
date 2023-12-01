#include <iostream>
using namespace std;
class multi
{
    public:
        int a;
        int b;
        int c;
        multi(int x,int y,int z)
        {
            a =x;
            b = y;
            c = z;
        }
        int print();
};

inline int multi :: print()
{
    return a*b*c;
}

int main()
{
    multi ob1(4,5,3);
    cout<<ob1.print()<<endl;
}