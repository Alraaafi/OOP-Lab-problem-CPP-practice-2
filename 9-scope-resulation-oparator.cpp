#include <iostream>
using namespace std;
int x=10;
class A 
{
public:
    void print();
};

void A::print()
{
    cout<<"I'm Scope Resulation in the Class"<<endl;
}
int main() {
    A obj;
    int x = 20;
    obj.print();
    //Alraaafi
    std::cout<<x<<" "<<::x<<endl;
}