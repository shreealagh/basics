//decimaltobinary
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0)
    {
        int last_bit=(n&1);
        ans=last_bit*pow(10,i)+ans;
         n=n>>1;
         i++;
    }
    cout<<ans<<endl;
}
