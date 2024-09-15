// To find length of the string

// #include<iostream>
// using namespace std;
// int main()
// {
//     int count=0;
//     string name;
//     cout<<"Enter a string :";
//     cin>>name;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     cout<<"Length of the given string is:"<<count<<" "<<endl;  
//     return 0;
// }

// Reverse a string
// #include<iostream>
// using namespace std;

// int getlength(string s){
//     int count=0;
//     for(int i=0;s[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// int main()
// {
//   string s1;
//   cout<<"Enter a string:";
//   cin>>s1;
//   int  low=0;
//   int len=getlength(s1);
//   int high=len-1;
//   while(low<=high){
//     swap(s1[low++],s1[high--]);
//   } 
//   cout<<"Reverse of the given string is :"<<s1<<endl;   
//  return 0;
// }

// Reverse words in a string II [ Tokenizer Approach]
// class Solution {
// public:
//     string reverseWords(string s) {
//         stringstream ss(s);
//         string result="";
//         string token="";
//         while(ss>>token){
//             reverse(begin(token),end(token));
//             result+=token+" ";
//         }
//         // To remove last extra space from the string
//         return result.substr(0,result.length()-1);
//     }
// };

// Find Maximum occuring character in a string

// #include<iostream>
// using namespace std;
//  char getMaxOccuringChar(string str)
//     {
//         int arr[26]={0};
//         for(int i=0;i<str.length();i++){
//             char ch=str[i];
//             // To convert to lowercase alphabets
//             int num=0;
//             num=ch-'a';
//             arr[num]++;
//         }
//         int maxi=-1;
//         int ans=0;
//         for(int i=0;i<26;i++){
//             if(arr[i]>maxi){
//                 ans=i;
//                 maxi=arr[i];
//             }
//         }
//         return 'a'+ans;
//     }
// int main()
// {
//  string s;
//  cout<<"Enter a string:";
//  cin>>s;
//  cout<<"Maximum occuring string is:"<<getMaxOccuringChar(s)<<endl;   
// return 0;
// }

// Swapping 1st character of 1st array with 1st character of 2nd array

// #include <iostream>
// #include <string>

// using namespace std;

// void swap_first_chars(string &a, string &b) {
//     char temp = a[0];
//     a[0] = b[0];
//     b[0] = temp;
// }

// int main() {
//     string a = "hello", b = "world";
//     swap_first_chars(a, b);
//     cout << a << " " << b << endl; // Output: wello hello
//     return 0;
// }