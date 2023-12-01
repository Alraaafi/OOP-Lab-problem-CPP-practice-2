#include<iostream>
using namespace std;

class base1
{
public:
    string name;
};

class base2
{
public:
    int id;
};

class derived : public base1,public base2
{
    
public:
    void print()
    {
        cout<<"name is: "<<name<<endl;
        cout<<"Id is "<<id<<endl;
    }
};

int main()
{
    derived obj;
    obj.name = "tanvir";
    obj.id = 22111128;
    obj.print();
    //petens source code by ©ALRAAAFI (Md
}