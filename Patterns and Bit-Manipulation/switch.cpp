#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int ncr(int a ,int b){
    int num =  (factorial(a))/((factorial(b))*(factorial(a-b)));
    return num;
}

int main(){
    

    int ans = ncr(10,4);


    cout<<"Factorial is : "<<ans<<endl;











    return 0;
}






