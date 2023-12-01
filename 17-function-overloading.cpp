#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

double add(double a, double b)
{
    return a + b;
}

double add(double a, double b, double c)
{
    return a + b +c;
}

string add(string a, string b)
{
    return a + b;
}

string add(string a, string b, string c)
{
    return a + b + c;
}
int main()
{
    cout<<add(4,5)<<endl;
    cout<<add(5,8,2)<<endl;
    cout<<add((double)3.55,(double)7.99)<<endl;
    cout<<add((double)1.99,(double)2.11,(double)9.99)<<endl;
    cout<<add("tanvir"," ahmed ","rafi")<<endl;
    cout<<add("koml"," dey")<<endl;

    //petens source code by ©ALRAAAFI (Md
}