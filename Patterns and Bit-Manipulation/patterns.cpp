#include <iostream>
// #include <string>
using namespace std;

int main()
{

    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    
    int i = 1;
    while(i<=n){

        
        //block-1
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        } 
        //stars
        int k = 1; 
        while(k<=2*(i-1)){
            cout<<'*';
            k++;
        }
        
        //block-2
        // int k=1;
        int val = n-i+1;
        while(val>=1){
            cout<<val;
            val--;
           
        } 
        
        cout<<"\n";
        i++;
    } 









    return 0;
}






















