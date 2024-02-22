#include<iostream>
using namespace std;
void age(int x)
{
    if(x>=18)
    {
        cout<<"Eligble"<<endl;
    }
    else if(x=15)
    {
        cout<<"Please come another time"<<endl;
    }
    else
    {
        cout<<"You are not eligble"<<endl;
    }
}
int main()
{
    int x;
    cout<<"please enter your age first"<<endl;
    cin>>x;
    
    age(x);
    return 0;
}