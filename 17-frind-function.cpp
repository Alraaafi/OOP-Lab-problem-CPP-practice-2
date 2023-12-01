#include <iostream>
 using namespace std;
class add
{
    private:
        int a;
        int b;
    public:
        add(int x,int y)
        {
            a = x;
            b = y;
        };
        void print()
        {
            cout<<a+b<<endl;
        }
        friend class divi;
};

class divi
{
    private:
        int k;

    public:
        divi(int cd)  { k = cd ; }
         void pt(add num)
         {
             cout<<(num.a+num.b)/k<<endl;
         }
};

int main()
{
    add ob(4,8);
    ob.print();

    divi ob2(5);
    ob2.pt(ob);
}