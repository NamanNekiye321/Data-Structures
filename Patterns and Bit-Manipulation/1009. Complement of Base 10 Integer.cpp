// class Solution {
// public:
//     int bitwiseComplement(int n) {

//         int decimaltobinary = 0;
//         int i =0, j = 0 , k = 0;
//         int binarytodecimal = 0;
//         int complement = 0;
//         while(n!=0){
//             int bit = n&1;
//             decimaltobinary += (bit*pow(10,i));
//             n = n>>1;

//             i++;
//         }
//         while(decimaltobinary!=0){
//             int digit = decimaltobinary%10;
//             if(digit ==1){
//                 digit = 0;
//             }else{
//                 digit = 1;
//             }
//             complement += digit*(pow(10,j));

//             decimaltobinary = decimaltobinary /10;
//             j++;
           
//         }
//         while(decimaltobinary!=0){
//             int digit = decimaltobinary%10;
//             if(digit==1){

//             }
//             binarytodecimal = (binarytodecimal+digit)*pow(2,k);

//             decimaltobinary = n/10;
//             k++;
//         }
        
//         return binarytodecimal;

        
//     }
// };




 
// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         int m = 0;
//         int c = 0;
//         int n = 0;
//         int i =0, k = 0;
//         while(n!=0){
//             int bit = n&1;
//             m += (bit*pow(10,i));
//             n = n>>1;
//             i++;
//         }
//         c = ~(m);
//         while(m!=0){
//             int digit = m&1;
//             m += digit*(pow(2,i));
//             n = n/10;
//             k++;
//         }
//         return m;
//     }
// };







