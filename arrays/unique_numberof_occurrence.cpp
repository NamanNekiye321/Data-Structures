#include <iostream>
using namespace std;

class Solution {
public:

    bool uniqueOccurrences(vector<int>& arr) {      
        int j =0;
        for(int i = 0;i<arr.size();i++){
            int count[]  = {};
            int num = arr[i];
        while(j < arr.size()){           
            if(num == arr[j]){
                count[j] += 1;
            }
           j++;
        }
}
for(int k =0; k< 4;k++){
    int common = count[k] ;
    if(common == count[k+1]){
        common = count[k+1]
        return true;
    }
    else{
        return false;
    }
}  
    }
};


int main(){

    return 0;
}
