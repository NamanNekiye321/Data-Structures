#include <iostream>
using namespace std;


int main(){
    
    int n;
    cout<<"Enter binary number"<<endl;
    cin>>n;
    
    int i = 0;
    int decimal = 0;
    while(n!=0){
        int digit = n%10;
        decimal += digit* pow(2,i);
        n = n /10;
        i++;
    }
    cout<<"The Decimal number is "<<decimal<<endl;





    return 0;
}




















