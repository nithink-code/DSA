/*
#include<iostream>
using namespace std;
int main()
{
  int arr[6]={1,2,3,4,5};
  char ch[5]="abcd";
  cout<<arr<<endl; // Output will be address of first location
  cout<<ch<<endl;  // Output will be  value of the entire char array
  
  // Attention Here
  // IN char array the compiler will print the output until it finds null char in the array
  char temp='a';
  char *p=&temp;
  cout<<"Value:"<<p<<endl; // It will print the output until it gets null character 
 return 0;
}
*/

// Important Question
/*
#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != ‘\0’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}
*/
// Answer is 
//A65AAB66BBC67CCD68DD

// Another Question
/*
#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1; // Here index 3 - index 0 = 3 will be the answer not the value present in array
  return 0;
}
*/