#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int sum = 0;
    //Write your code here
    for(int i =0;i< size;i++){
       sum = sum ^ arr[i];
    }
    return sum;
}

int main(){
    int arr[7] = {2,3,4,4,3,5,2};
    int unique = findUnique(arr,7);
    cout<<unique<<endl;

    return 0;
}



