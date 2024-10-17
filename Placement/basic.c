#include<stdio.h>
#include<stdlib.h>
int main(){

    //int m,i=0,j=1,k=2;
    //m=(++i && j--) || --k;
    //m=(k-- || --j) && i++;
    //m=--j || i++ && --k && ++j || j++;
    // Post will be incremented first from right side
     //int x=5;
    //printf("%d\t%d\t%i\t%d\t%d",x--,--x,x,x++,++x);

    // Representation of Octal
    //char c='\010';;;;;;;;;;;;;;;;;

    //Only 3 digits is the range of character
    // char c='\999';
    // printf("%d",c);

     // * TCS *
    // printf("\nab");
    // printf("\bsi");
    // printf("\rha");

    // Pattern
    // 1.  Hollow Traingular Pyramid

// spaces
// int n=8;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=2*n-1;j++){
//         if(i==n || i+j==n+1 || j-i==n-1){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
        
// }
// printf("\n");
// }


// Rhombus
 int n=4;
 for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
        if(i-j==n-1 || i+j==3*n-1 || j-i==n-1 || i+j==n+1 ){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
 }




}


