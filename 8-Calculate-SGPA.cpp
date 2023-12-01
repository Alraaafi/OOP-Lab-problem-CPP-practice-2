#include <iostream>
using namespace std;

class SGPA
{ 
public:
    int subject;
    double credit[10];
    double gread[10];
    double sumCG=0;
    double sumC=0;
    double sgpa;
    int i;
    void get()
    {
        cout<<"Enter Total Subject in this Semister: ";
        cin>>subject;
        cout<<endl;
        for(i=0; i<subject; i++)
        {
            cout<<"Enter Subject-"<<i+1<<" Credit And Gread point: ";
            cin>>credit[i]>>gread[i];
            sumCG = sumCG + (credit[i]*gread[i]);
            sumC = sumC + credit[i];
            cout<<endl;
        }
    }

    void print()
    {
        sgpa  = (sumCG/sumC);
        cout<<"Your Semister GPA is: "<<sgpa<<endl;
    }
    
};
int main() {
    SGPA s1,s2;
    s1.get();
    s1.print();

    s2.get();
    s2.print();
    //Alraaafi
}