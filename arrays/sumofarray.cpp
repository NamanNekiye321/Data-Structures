#include <iostream>
using namespace std;


int sumofarray(int arr[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    return sum;

}


int main(){

    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter element of an array"<<endl;

    for(int i =0;i<size;i++){
        cin>> arr[i];
    }

    cout<<"Sum of an array is : "<< sumofarray(arr,size)<<endl;

    return 0;
}

