// USE OF INLINE FUNCTION
#include<iostream>
using namespace std;
inline int getmax(int& a,int& b){
   return a>b ? a:b;
}
int main(){
   int a,b;
   cout<<"Enter the values of a and b:"<<endl;
   cin>>a>>b;
   int ans=0;
   // calling inline function
   ans=getmax(a,b);
   cout<<ans<<endl;
    return 0;
}