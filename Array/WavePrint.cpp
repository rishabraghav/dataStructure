#include <iostream>
#include<cstring>

using namespace std;

int main() {
  int row;
  int col;
  cin>> row;
  cin>> col;
  int array[row][col];

  for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cin>>array[i][j];
        }
        cout<<endl;
    } 

  for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            // cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cout<<array[i][j];
        }
        cout<<endl;
    } 

    for(int j = 0; j < col; j++)
    {
        if(j%2 == 0 || j == 0) {
          for(int i = 0; i < row; i++){
            // cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cout<<array[i][j]<<" ";
          }
        } else {
          for(int i = row - 1; i >= 0; i--){
            // cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cout<<array[i][j]<<" ";
          }
        }
        
    }
  }