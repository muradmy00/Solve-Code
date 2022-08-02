#include <iostream>
using namespace std;

int main()
{
    int el,i,j,m=0;
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    cin>>el;
    if(el==1){
    if(i-2<0)
    {
     m+=(i-2)*-1;
    }
    else{
        m+=i-2;
        }
    if(j-2<0)
    {
        m+=(j-2)*-1;
    }
    else{
        m+=j-2;
        }
    cout<<m;

    return 0;
      }
     }
    }

}
