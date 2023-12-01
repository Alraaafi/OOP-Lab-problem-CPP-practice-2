#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
class details
{
//private:
public:
    int id,session,phone;
    char name[50],email[50];
    float gpa;
//public:
    void getInfo()
    {
        cin  >> id>>name>>gpa>>session>>phone>>email;
    }
    //int i, string n, float g, int s, int p, string e
    void shaw()
    {
        cout<<setw(10)<<id<<setw(20)<<name<<setw(8)<<gpa<<setw(10)<<session<<setw(15)<<phone<<setw(20)<<email<<endl;
    }
};
int main()
{
    int member,i;

    cout<<"Enter Total Member That you want to Details: "<<endl;
    cin >> member ;
    details man[member];
    for(i=0; i<member; i++)
    {
        cout<<"Enter Member-"<<i+1<<"ID,NAME,GPA,SESSION,PHONE and EMAIL Respectevly: "<<endl;
        man[i].getInfo();
    }


    cout<<setw(10)<<"ID"<<setw(20)<<"NAME"<<setw(8)<<"GPA"<<setw(10)<<"SESSION"<<setw(15)<<"PHONE NO"<<setw(20)<<"EMAIL"<<endl;

    for(i=0; i<member; i++)
    {
        man[i].shaw();
    }
    ;
    //setfill("#")
    //petens source code by ©ALRAAAFI
}