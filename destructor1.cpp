#include<iostream>
using namespace std;
int count=0;
class demo
{
    public:
    demo()
    {
        count++;
        cout<<"no of object created"<<count<<endl;
    }
    ~demo()
    {
        cout<<"no of object destroyed"<<count<<endl;
        count--;
    }
};
int main()
{
    demo aa,bb,cc,dd;
    return 1;
}
