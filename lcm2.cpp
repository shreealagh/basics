#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int lcm=0;
    int l;
    int m;
    m=n1*n2;
    if(n1>n2)
    {
        l=n1;
    }
    else
    {
        l=n2;
    }
    while(l<=m)
    {
        if(l%n1==0 && l%n2==0)
        {
            lcm=l;
            break;
        }
        l++;
    }
    cout<<lcm;
}
