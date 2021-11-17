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

    for(int j = 0; j < col; j++)
    {
        if(col%2 == 0 || col == 0) {
          
        } else {

        }
        for(int i = 0; i < row; i++){
            // cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cout<<array[i][j];
          }
    }
  }