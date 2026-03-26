#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){

    
    int temp =0;
    cout<<"Reversing array"<<endl;
    for(int i =0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-i-1] ;
        arr[n-i-1] = temp;
    }
}

int main(){

    int arr[6] = {2,7,5,9,4,6};

    cout<<"Printing Array"<<endl;
    for(int i =0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;

    reverseArray(arr,5);

    cout<<"Printing Reverse array"<<endl;
    for(int i =0;i<5;i++){
        cout<<arr[i];
    }
   
    







    
    return 0;
}


