#include<iostream>
using namespace std;
int main()
{
    int k,n,w,B;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1; i<=w; i++)
    {
      sum+=i;
    }
    B=(sum*k)-n;
    if(B<0){
        cout<<"0";
    }
    else{
    cout<<B<<endl;
    }
    return 0;

}
