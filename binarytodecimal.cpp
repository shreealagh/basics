#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int no;
    while(n--)
    {
        cin>>no;
        int ans=0;
        int i=0;
        while(no>0)
        {
            int r=no%10;
            ans=ans+r*pow(2,i);
            no=no/10;
            i++;
        }
        cout<<ans<<endl;

    }
}
