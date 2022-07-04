#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> p;
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++) {
        int temp = target - arr[i];
        if(p.find(temp) != p.end()){
           ans.push_back(p[temp]);
           ans.push_back(i);
           break;
        } else {
            p[arr[i]] = i;
        }
    }
    return ans;
}

int main()
{
    int target;
    cin >> target;
    int size;
    cin>> size;
    vector<int> arr;

    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }


    vector<int> ans = twoSum(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}