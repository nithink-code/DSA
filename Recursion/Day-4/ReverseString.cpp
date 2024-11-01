// Taking a string input from user & reversing it using Recursion
#include<iostream>
#include<string>
using namespace std;
void reverse(int i,int j, string& s){
    // Base case
    if(i>j){
        return;
    }
    // Processing
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(i,j,s);
}
int main()
{
 string str;
 cout<<"Enter the elements of the string:"<<endl;
 getline(cin,str);
 reverse(0,str.length()-1,str);
 cout<<"Reversed string is: "<<str;
 return 0;
}