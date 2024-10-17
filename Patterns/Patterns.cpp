// A B C
// B C D
// C D E

// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  cin>>n;
//  for(int i=0;i<n;i++){
//   int count=i;
//   for(int j=1;j<=n;j++){
//     cout<<char('A'+count)<<" ";
//     count++;
//   }
//   cout<<endl;
//  }   
    
    
// return 0;
// }

// A
// B B
// C C C

// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  cin>>n;
//  for(int i=0;i<=n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<char('A'+i)<<" ";
//     }
//     cout<<endl;
//  }     
// return 0;
// }

//A 
//B C 
//C D E 
//D E F G

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0;i<=n;i++){
//     int count=i;
//     for(int j=0;j<=i;j++){
//         cout<<char('A'+count)<<" ";
//         count++;
//     }
//     cout<<endl;
//   }  
    
    
// return 0;
// }


// D 
// C D 
// B C D 
// A B C D 

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0;i<=n;i++){
//     int count=n;
//     for(int j=0;j<=i;j++){
//         cout<<char('A'+(count-i))<<" ";
//         count++;
//     }
//     cout<<endl;
//   }    
// return 0;
// }

// 1111
//  222
//   33
//    4

// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  cin>>n;
//  for(int i=1;i<=n;i++){
//     for(int j=0;j<i-1;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<=n-i;j++){
//         cout<<i<<"";
//     }
//     cout<<endl;
//  }  
//  return 0;
// }

//     1   
//    121  
//   12321 
//  1234321

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=n-i;j>=0;j--){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     for(int j=i-1;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;  
//   }      
//  return 0;
// }