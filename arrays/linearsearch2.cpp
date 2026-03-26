#include <iostream>
using namespace std;


bool linearsearch(int arr[],int n,int key){
    
    for(int i =0;i<n;i++){
        if (arr[i] == key){
            // cout<<key<< " found at index position "<<i<<endl;
            return true;
        }
    }

    return false;
}

int main(){
    int key;

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    //whether 1 is present in it or not?
    cout<<"Enter the value to search for in an array ";
    cin>>key;

    bool found = linearsearch(arr,10,key);
    cout<<found<<endl;


    return 0;
}


