#include<iostream>

using namespace std;




// Search Element in Array

// int main(){

//     int arr[5] = {10,30,20,90,70};
//     int find = 90;

//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<arr_len;i++){

//         if(arr[i]==find){
//             find = i;
           
//         }
//     }
//     cout<<"find = "<<find;
// }




// reverse integer

// int main(){

//     int arr[6] = {10,20,30,40,50,60};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int semi_len = len/2;
//     cout<<semi_len<<endl;

//     for(int i=0; i<semi_len; i++){

//         int temp = arr[(len-1)-i];
//         arr[(len-1)-i] = arr[i];
//         arr[i] = temp;
//     }

//     for(int i =0; i<len; i++){
//         cout<<arr[i]<<" ";
//     }
    
// }





// Second Largert Number

// int main(){

//     int arr[4] = {40,30,20,60};

//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     cout<<"len ="<<arr_len<<endl;

//     int max_2 = 0;
//     int max_1 = 0;


//     for(int i=0;i<arr_len;i++){

//         if(max_1<arr[i]){
//             max_2 = max_1;
//             max_1 = arr[i];
//         }

//         else if(max_2<arr[i]){
//             max_2 = arr[i];
//         }

//     }

//     cout<<"max-1 = "<<max_1<<endl;
//     cout<<"max-2 = "<<max_2;


// }





// FiboNacci series

// int main(){

//     int arr[5] = {0,1};

//     for(int i=2;i<5;i++){
//         arr[i] = arr[i-1] + arr[i-2];
//     }

//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<arr_len;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// Rotate Array

// int main(){

//     int arr[4] = {1,2,3,4};

//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     int temp = arr[arr_len-1];
//     cout<<"temp = "<<temp<<endl;

//     for(int i = arr_len-1;i>0;i--){
//         arr[i] = arr[i-1];
//     }

//     arr[0] = temp;


//     for(int i=0;i<arr_len;i++){
//         cout<<arr[i]<<" ";
//     }
// }




// Segregate 0 and 1   isko aur bhi chota kar sakte hai


// int main(){

//     int arr[7] = {0,1,1,0,0,0,1};

//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     int start = 0;
//     int last = arr_len-1;

//     while(start<last){

//         if(arr[start]==0 && arr[last]==1){
//             start++;
//             last--;
//         }

//         else if(arr[start]==1 && arr[last]==0){
//             swap(arr[start],arr[last]);
//             start++;
//             last--;
//         }

//         else if (arr[start]==1 && arr[last]==1){
//             last--;
//         }

//         else if(arr[start]==0 && arr[last]==0){
//             start++;
//         }
//     }
    

//     for(int i = 0;i<arr_len; i++){
//         cout<<arr[i]<<" ";
//     }
// }




// Find missing number from 1 to N

// Input: [1,2,4,5] → Output: 3


// int main(){

//     int arr[4] = {1,2,4,5};
//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     int arr_sum=0;

//     int total_sum;

//     for(int i=0;i<arr_len; i++){
//         arr_sum = arr_sum + arr[i];
//     }
//     cout<<"arr_sum = "<<arr_sum<<endl;
    
//     total_sum = (arr_len+1)*(arr_len)/2;
//     cout<<"total_sum = "<<total_sum<<endl;


//     if(total_sum!=arr_sum){
//         cout<<"missing number is "<<total_sum-arr_sum;
//     }

// }






//find dublicate numbers


// int main(){

//     int arr[5] = {1,3,4,2,2};



// }





//Two sum 1st Approach 

// int main(){

//     int arr[5] = {2,7,11,15,27};
//     int target = 34;

//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<arr_len; i++){
        
//         for(int j=i+1; j<arr_len; j++){

//             if(arr[i]+arr[j]==target){
//                 cout<<"the number is "<<arr[i]<<" and  "<<arr[j]<<endl;
//                 break;
//             }
//         }
//     }
// }




// two sum second approach but jyda kuch difernce nahi hai 

// int main(){

//     int arr[5] = {2,7,11,15,27};
//     int target = 13;
//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<arr_len; i++){

//         int num2 = target-arr[i];

//         for(int j=i+1; j<arr_len; j++){

//             if(arr[j]==num2){
//                 cout<<"number find "<<arr[i]<<"and "<<arr[j]<<endl;
//                 break;
//             }
//         }
//     }

    
// }








// Two Sum Problem 

// int main(){

//     int arr[5] = {2,7,11,15,27};
//     int target = 26;
//     int arr_len = sizeof(arr)/sizeof(arr[0]);

//     int start = 0;
//     int end = arr_len-1;

//     while(start<end){

//         int two_sum = arr[start]+arr[end];

//         if(target<two_sum){
//             end--;
//         }
//         else if(target>two_sum){
//             start++;
//         }
//         else if(target==two_sum){
//             cout<<"find "<<arr[start]<<" "<<"and "<<arr[end]<<endl;
//             break;
//         }
//     }

// }





// bug hai usko solve karna hai acche se dekhna hai 
// int main(){


//     int arr[5] = {2,4,6,8,10};

//     int start = 0;
//     int end = sizeof(arr)/sizeof(arr[0])-1;

//     int target = 10;

//     while(start<end){
         
//        int mid = (start+ end)/2;

//        if(arr[mid]==target){
//          cout<<" the target number = "<<arr[mid]<<" index = "<<mid<<endl;
//          break;
//        }

//        else if(arr[mid]< target){
//          start = mid;
//        }

//        else if(arr[mid] > target){
//         end = mid;
//        }
       
//     }
// }






/// find square root using binary 


int main(){


    int target = 80;

    int start = 0;
    
    int end  = target;

    while(start<=end){

        cout<<"start = "<<start<<" "<<"end = "<<end<<endl;

        int mid = (start+end)/2;
        cout<<"mid = "<<mid<<endl;

        if( mid*mid > target){
            end = mid-1;
            cout<<"if work end = "<<end<<endl;

        }

        else if (mid*mid < target){
            start = mid+1;
            cout<<"else work start = "<<start<<endl;

        }

        else {
            start = mid;
            break;
        }

        
    }

    cout<<"ans = "<<start;



}