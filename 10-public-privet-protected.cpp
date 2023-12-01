#include <iostream>
using namespace std;

class base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    base(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void print()
    {
        cout<<"private Data is: "<<a<<endl;
        cout<<"protected Data is: "<<b<<endl;
        cout<<"public Data is: "<<c<<endl;
    }
};
int main() {
    //Alraaafi
    base obj(3,6,8);
    obj.print();
}