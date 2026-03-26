#include <iostream>
using namespace std;


void linearsearch(int arr[],int n){
    int key = 1;
    bool found  = false;
    for(int i =0;i<n;i++){
        if (arr[i] == key){
            cout<<key<< " found at index position "<<i<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<key<< " is not found"<<endl;
    }
   

}

int main(){

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    //whether 1 is present in it or not?

    linearsearch(arr,10);


    





    return 0;
}


