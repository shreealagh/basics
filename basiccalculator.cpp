#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans;
    char ch;
    cin>>ch;
    while(ch!='X' && ch!='x')
    {   
        
        if(ch=='*')
        {
            cin>>a>>b;
            ans=a*b;
            cout<<ans<<endl;
        }
        else if(ch=='/')
        {
           cin>>a>>b;
           ans=a/b;
           cout<<ans<<endl;
        }
        else if(ch=='+')
        {
            cin>>a>>b;
            ans=a+b;
            cout<<ans<<endl;
        }
        else if(ch=='-')
        {
            cin>>a>>b;
            ans=a-b;
            cout<<ans<<endl;
        }
        else if(ch=='%')
        {
            cin>>a>>b;
            ans=a%b;
            cout<<ans<<endl;
        }
        else
        {
            cout<<"Invalid operation. Try again."<<endl;
        }
        cin>>ch;
    }
}
