// Permutation in a string

// class Solution {
// private:
//     bool check(int a[26],int b[26]){
//     for(int i=0;i<26;i++){
//         if(a[i] != b[i]){
//             return 0;
//         }
//     }
//     return 1;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {
//         // Convert s1 to count
//          int count1[26]={0};
//          int count2[26]={0};
//         for(int i=0;i<s1.length();i++){
//             int idx = s1[i]-'a';
//             count1[idx]++;
//         }
//         // Convert first window of s2 to count
//         int i=0;
//         int windowsize=s1.length();
//         while(i<windowsize && i<s2.length()){
//             int index=s2[i]-'a';
//             count2[index]++;
//             i++;
//         }
//         if(check(count1,count2)){
//             return 1;
//         }
//          // Convert remaining elements to count
//          while(i<s2.length()){
//             char newchar=s2[i];
//             int index=newchar-'a';
//             count2[index]++;
            
//             // remove old character
//             char oldchar=s2[i-windowsize];
//             index=oldchar-'a';
//             count2[index]--;
//             i++;
//             if(check(count1,count2)){
//             return 1;
//          }
//      }
//      return 0;
//     }
// };

// String Compression
// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i=0;
//         int ansidx=0;
//         while(i<chars.size()){
//             int j=i+1;
//             while(j<chars.size() && chars[i]==chars[j]){
//                 j++;
//             }
//             chars[ansidx++]=chars[i];
//             int count = j-i;
//             if(count>1){
//                 string cnt=to_string(count); //Converting int count to string
//                 for(char ch: cnt){
//                     chars[ansidx++]=ch;  //Converting count to single digit
//                 }
//             }
//             i=j; //Traversing new vector
//         }
//         return ansidx;
//     }
// };

// Remove all adjacent duplicates in string [ The resultant string should be unique]
// class Solution {
// public:
//     string removeDuplicates(string s) {
//        string ans="";
//        for(int i=0;i<s.length();i++){
//          if(ans.length()>0){
//             if(ans[ans.length()-1]== s[i]){
//                 ans.pop_back();
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//          }
//          // Add remaining unique elements to the ans
//          else{
//             ans.push_back(s[i]);
//          }
//        }
//        return ans; 
//     }
// };

// Print 2D array elements like a sine wave

// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int>ans;
//     for(int col=0;col<mCols;col++){
//         // To print from top to bottom for even column indices
//         if(col%2==0){
//             for(int row=0;row<=nRows-1;row++){
//                ans.push_back(arr[row][col]);
//             }
//         }
//         // To print from bottom to top for odd column indices
//         else{
//            for(int row=nRows-1;row>=0;row--){
//                ans.push_back(arr[row][col]);
//            }
//         }
//     }
//     return ans;
// }

// [VIP Question]
// Spiral Print Leetcode Question

// Search element in a 2D matrix
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int start=0;
//         int end=(row*col)-1;
//         while(start<=end){
//             int mid=(start+end)/2;
//             int element=matrix[mid/col][mid%col];
//             if(element==target){
//                 return true;
//             }
//             else if(target>element){
//                 start++;
//             }
//             else{
//                 end--;
//             }
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//   // Sieve of Eratosthenes approach
//     int countPrimes(int n) {
//         int count=0;
//         vector<bool>prime(n+1,true);
//         prime[0]=prime[1]=false;
//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 count++;
//                 for(int j=2*i;j<n;j=j+i){
//                       prime[j]=0;
//                 }
//             }
//         }
//         return count;
//     }
// };

// MODULAR EXPONENTION [ Fast Power]
/*#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int ans=1;
	while(n>0){
		// odd case
		if(n%2==1){
			ans=(1LL *(ans)%m*(x)%m)%m;
		}
		x=(1LL*(x)%m*(x)%m)%m;
		n=n>>1;
	}
	return ans;
}
*/

/*
You are given an integer N, create a 2D array named ‘grid’ of size N x N. 

The diagonal of the grid should be filled with 0.
The lower side should be filled with -1s.
The upper side should be filled with 1s.




#include<iostream>
#include<vector>
using namespace std;


int main() {
    int N;
    cin>>N;
    vector<vector<int>>grid(N,vector<int>(N,0));
        // Diagonal to be 0
        for(int i=0;i<N;i++){
            grid[i][i]=0;
        }
        // Lower side should be -1
        for(int i=1;i<N;i++){
            for(int j=0;j<i;j++){
                grid[i][j]=-1;
            }
        }
        // Upper side should be 1
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                grid[i][j]=1;
            }
        }
    
    // Don't change the code below
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<grid[i][j]<<" ";
        }    
        cout<<endl;
    }
    return 0;
}
*/