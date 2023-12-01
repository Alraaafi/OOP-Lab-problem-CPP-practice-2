#include <iostream>
class area
{
public:
        double triangle(int, int);
        int rectangle(int, int);
        double circle(int);
};

double area :: triangle(int b, int h)
{
    return 0.5*b*h;
}

int area ::rectangle(int b, int h)
{
    return b*h;
}

double area :: circle(int r)
{
    return 3.1416*r*r;
}

using namespace std;
int main() {
    area obj;
    cout<<obj.triangle(4,5)<<endl;
    cout<<obj.rectangle(4,5)<<endl;
    cout<<obj.circle(6)<<endl;
    //Alraaafi
}