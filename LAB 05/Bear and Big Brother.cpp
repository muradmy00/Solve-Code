/*#include<iostream>
using namespace std;
int main()
{
  int a,b,count=0;
  cin>>a>>b;
  for(;;){
  if(a<=b){
  a=a*3;
  b=b*2;
  count++;
  }
  else{
  break;
  }
  }
  cout<<count<<endl;
  return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
  int a,b,i;
  cin>>a>>b;
  for(i=1;;i++){
  a*=3;
  b*=2;
  if(a>b)break;
  }
  cout<<i<<endl;
  return 0;
}
