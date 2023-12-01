#include <iostream>
using namespace std;

class halfPyramid
{
public:
    int i,j;
    halfPyramid(int n)
    {
        cout<<endl<<"Half pyramid is: "<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=n; j>=i; j--) cout<<" ";
            
            for(j=1; j<=i*2-1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

class fullPyramid
{
public:
    int i,j;
    fullPyramid(int n)
    {
        cout<<endl<<"Full pyramid is: "<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=n; j>=i; j--) cout<<" ";
            
            for(j=1; j<=i*2-1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        //..........
        for(i=n-1; i>=1; i--)
        {
            for(j=n; j>=i; j--) cout<<" ";
            
            for(j=1; j<=i*2-1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
int main() {
    halfPyramid(10);
    fullPyramid(5);
    //Alraaafi
}