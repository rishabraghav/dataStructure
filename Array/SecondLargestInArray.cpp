#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{	
    int INT_MIN = -2147483648;
    int max = INT_MIN;
  
 	for(int i = 0; i < n; i++) {
    	if(max < input[i]) {
         max = input[i];
     	}
 	}
   
    int secondMax = INT_MIN;
    int result;
    for(int i = 0; i < n; i++) {
        if(max > input[i]) {
            if(secondMax < input[i]) {
                secondMax = input[i];
            }
        } 
    }
   
    return secondMax;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}