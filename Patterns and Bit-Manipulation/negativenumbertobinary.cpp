#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number: ";
    cin >> n;

    for(int i = 31; i >= 0; i--){
        cout << ((n >> i) & 1);
    }




    
    return 0;
}