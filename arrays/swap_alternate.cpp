#include <iostream>
using namespace std;

void swap_alternate(int arr[],int n){
    int temp =0;
    for(int i =0;i<n-1;i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
    }
}


int main(){

    int arr[10] = {4,5,3,7,8,3,1,4,7,9};
    cout<<"Before swapping\n";
    for(int i = 0 ;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap_alternate(arr,10);
    cout<<"After swapping\n";
    for(int i = 0 ;i<10;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}



















