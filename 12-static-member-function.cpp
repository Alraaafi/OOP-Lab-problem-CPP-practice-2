#include <iostream>
using namespace std;
class myClass
{
    public:
        static int a;
        static int b;
        //a = 5;
        static void print()
        {
            cout<<++a<<"    "<<++b<<endl;
        }
};

int myClass::a;
int myClass::b;

int main() {
    
    myClass obj1,obj2;
    obj1.print();
    obj1.print();
    obj1.print();

    cout<<"socpe acsess: "<<myClass::a<<endl;
    cout<<"function socpe acsess: "; 
     myClass::print();


    obj2.print();
    obj2.print();
    obj2.print();
}