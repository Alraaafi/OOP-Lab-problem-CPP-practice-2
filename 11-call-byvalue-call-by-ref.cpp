#include <iostream>
using namespace std;
void swp(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void sp(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main() {
    int a = 10;
    int b= 20;
    
    sp(a,b); //cal by value
    cout<<a<<" "<<b<<endl; 

    swp(&a,&b); //cal by ref
    cout<<a<<" "<<b<<endl; 

    //Alraaafi
}