#include <iostream>
using namespace std;
int main() {
    int term,first=0,second=1,i;

    cout<<"Enter the Fibonacci terms: ";
    cin>>term;
    int fib[term];

    for(i=0; i<term; i++)
    {
        if(i==1 || i==0)
        {
            fib[i] = i;
        }
        else
        {
            fib[i] = fib[i-2] + fib[i-1];
            
            
        }
        cout<<fib[i]<<" ";
    }
//Alraaafi
}