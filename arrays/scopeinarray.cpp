#include <iostream>
using namespace std;

void print(int arr[],int n){
     

     arr[0] = 677;

    //printing inside the function
    for(int i =0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<"inside the function"<<endl;

}


int main(){
  
    int arr[4] = {1,2,3,4};

    cout<<"outside the function " ;

    //printing outside the function
    for(int i =0;i<4;i++){
        cout<<arr[i]<<' ';
    }
    cout<<"\n";

    print(arr,4);

    for(int i =0;i<4;i++){
        cout<<arr[i]<<' ';
    }









    return 0;
}






