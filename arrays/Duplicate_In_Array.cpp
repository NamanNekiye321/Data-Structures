#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    // Write your code here
    //     for(int i =0; i<arr.size();i++){
    //         int num = arr[i];
    //         for(int j=i+1;j<arr.size();j++){
    //             if(num == arr[j]){
    //                 return num;

    //             }

    //         }

    //     }
    //  return -1;

    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{

    vector<int> arr = {1,2,3,4,5,6,7,8,4};
    int res = findDuplicate(arr);
    cout<<res<<endl;


    return 0;
}
