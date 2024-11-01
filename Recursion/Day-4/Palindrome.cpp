#include<iostream>
#include<string>
using namespace std;
bool check_palindrome(int i, int j,string& str){
      // Base case
      if(i>j){
        return true;
      }
      if(str[i]!=str[j]){
        return false;
      }
      else{
        return check_palindrome(i+1,j-1,str);
      }
}
int main()
{
  string s;
  cout<<"Enter the string: "<<endl;
  getline(cin,s);
  bool ans = check_palindrome(0,s.length()-1,s);
  if(ans){
    cout<<"String is a Palindrome"<<endl;
  }
  else{
    cout<<"String is not a Palindrome"<<endl;
  }  
return 0;
}