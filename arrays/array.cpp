#include <iostream>
using namespace std;

// template <typename t, typename u>
void displayArray(char arr[],int n){

     for(int i = 0; i< n; i++){
        cout<< arr[i] << ' ';
    }
 
}

template <typename t,typename u>
void maxminarr(t arr[], u n){

    int maximum = 0;
    int minimum =0;
    for(int i =0;i < n ;i++){
       if(arr[i] <arr[i+1]){
        minimum = arr[i];
       }  
       else{
        minimum = arr[i+1];
       }
    }
    cout<<"The minimum element is " <<minimum<<endl;
}







int main(){

    int third [15]= {2,7,4,5,6,7,8,4,22,1,3,4,6,7};

    maxminarr(third, 14);



    // displayArray(third,15);
    // cout<< sizeof(third);



    char c[5] = {'a','b','c','d','e'};
    // cout<< c[3] <<endl;

    // displayArray(c,5);













   
    return 0;
}




