#include <iostream>
using namespace std;
class factorial
{
public:
    int n,i,fact;
    void get()
    {
        cout<<"Enter N: ";
        cin>>n;
    }
    int result()
    {
        fact = 1;
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
        }
        return fact;
    }
};
int main() {

    factorial number;
    number.get();
    cout<<"The Factorial is: "<<number.result()<<endl;
    //Alraaafi
}