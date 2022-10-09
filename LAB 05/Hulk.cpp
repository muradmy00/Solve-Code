#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            cout<<" "<<"I hate that";
        }
        if(i%2==0)
        {
            cout<<" "<<"I love that";
        }
    }
    if(n%2!=0)
    {
        cout<<" "<<"I hate it";
    }
    if(n%2==0)
    {
        cout<<" "<<"I love it ";
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
 {
    int a,i;
    cin>>a;
    for(i=0;i<a;i++) {
        if(i%2==0)
        {
            cout<<"I hate";
        }
        else
        {
            cout<<"I love";
        }
        if(i!=a-1)
        {
            cout<<"that";
        }
        else{
            cout<<"it";
        }
    }
    return 0;
}
*/
