#include <iostream>
using namespace std;

int main() {
 int row,col;
 cin>>row>>col;
 int arr[100][100];
 for(int i = 0; i < row; i++){

   for(int j = 0; j < col; j++){
    cin>>arr[i][j];
   }
   cout<<endl;
 }

 for( int i=0,k=0;i<row;k++){
   for(int j=0;j<col;j++){
     cout<<arr[i][j]<<" ";
   }
   cout<<endl;
   if(k==row - 1){ 
    i+=1;
    k=i-1;
   } 
   }
}