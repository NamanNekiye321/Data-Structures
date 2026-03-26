#include <iostream>
using namespace std;

// template <typename t, typename u>
// void displayArray(char arr[],int n){

//      for(int i = 0; i< n; i++){
//         cout<< arr[i] << ' ';
//     }
 
// }

// template <typename t,typename u>
// void maxminarr(t arr[], u n){

//     int maximum = 0;
//     int minimum =0;
//     for(int i =0;i < n ;i++){
//        if(arr[i] <arr[i+1]){
//         minimum = arr[i];
//        }  
//        else{
//         minimum = arr[i+1];
//        }
//     }
//     cout<<"The minimum element is " <<minimum<<endl;
// }

int getMax(int num[],int n){
    int maxi = INT_MIN;

    for(int i =0;i<n;i++){
        maxi = max(maxi,num[i]);
        // if(num[i] > maxi){
        //     max = num[i];
        // }
    }
    return maxi;
}

int getMin(int num[],int n){
    int mini = INT_MAX;

    for(int i =0;i<n;i++){
        mini = min(mini,num[i]);
        // if(num[i] < mini){
        //     mini = num[i];
        // }
    }
    return mini;
}
int main(){

    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int num[100];

    //taking input in array
     cout<<"Enter elements of array"<<endl;
    for(int i =0;i<size;i++){
        cin>>num[i];
    }

    cout<<"The maximum number in array is "<< getMax(num,size) <<" and minimum number in array is "<< getMin(num,size)<<endl;




    // int third [15]= {2,7,4,5,6,7,8,4,22,1,3,4,6,7};
    // maxminarr(third, 14);
    // displayArray(third,15);
    // cout<< sizeof(third);

    // char c[5] = {'a','b','c','d','e'};
    // cout<< c[3] <<endl;
    // displayArray(c,5);

    return 0;
}




