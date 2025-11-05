#include<iostream>
using namespace std;




// Leap Year

// int main(){

//     int year = 2028;

//     if(year%400==0){
//         cout<<"this is leap year";
//     }

//     else if(year%4==0 && year%100!=0){
//         cout<<"this is also leap year";
//     }

//     else{
//         cout<<"this is not leap year";
//     }
// }




// Reaverse Integer

// int main(){

//     int number  = 123;
//     int remainder = 0;

//     while(number){

//         int remainderx = number%10;
//         number =  number/10;
//         remainder = (remainder*10 ) + remainderx;
//     }

//     cout<<"reverse integer == "<<remainder;
// }



// int main(){

//     int a = 10;
//     int b = 20;

//     int c;

//     c = b;
//     b = a;
//     a =c;

//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
// }


// int main(){

//     int a = 10;
//     int b = 30;

//     b = (b+a);
//     a = b-a;
//     b = b-a;


//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
// }





// Armstorng number

// int power(int base, int exp){
//         int result =1;
//         for(int i=0;i<exp;i++){
//            result =  result*base;
//         }
//         cout<<"result = "<<result<<endl;
//         return result;
//     }

// int main(){


//     int arm_no = 153;
//     int original = arm_no;
//     int arm_len = 0;

//     int ans = 0;
//     int arm_rem;


//     int temp = arm_no;
//     while(temp!=0){
//         temp = temp/10;
//         arm_len = arm_len + 1;
//     }

//     while(arm_no!=0){

//         arm_rem = arm_no%10;
//         arm_no = arm_no/10;
//         ans = ans + power(arm_rem,arm_len);

//     }

//     cout<<"the answer = "<<ans<<endl;

//     if(ans == original)
//         cout << "Armstrong number";
//     else
//         cout << "Not an Armstrong number";
// }








// GCD and LCM

// int main(){

//     int gcd1 = 12;
//     int gcd2 = 18;
//     int gcd_max;

//     for(int i=1;i<=min(gcd1,gcd2);i++){

//         if(gcd1%i==0 && gcd2%i==0 ){
            
//             gcd_max = i;
//         }

//     }

//     //lcm
//     int lcm = (gcd1*gcd2)/gcd_max;


//     cout<<"gcd = "<<gcd_max<<endl;
//     cout<<"lcm = "<<lcm;
// }




// factorial

// int main(){

//     int num = 5;

//     int result=1;

//     for(num; num>0;num--){
//         result = result*num;
//     }

//     cout<<"result = "<<result;
// }


// fibonacci

// int main(){

//     int n = 3;

//     int num1 = 0;
//     int num2 = 1;

//     int ans;

//     if(n==0) ans = num1;
//     else if (n==1) ans = num2;
    
//     else{
//         for(int i=2;i<=n;i++){
         
//         ans = num1 +num2;
//         num1 = num2;
//         num2 = ans;
//     }
//     }

//     cout<<"ans = "<<ans;
// }






// Perfect number 


// int main(){


//     int num = 8;

//     int ans=0;

//     for(int i=1;i<6;i++){

//         if(num%i==0){
//             ans = ans + i;
//         }
//     }

//     if(ans==num){
//         cout<<"yes this is perfect number";
//     }

//     else{
//      cout<<"no this is not perfect number";

//     }

// }





// Strong number 

// int fact(int n){
//     if (n==1) return n;
//     return n*fact(n-1);
// }

// int main(){

//     int num = 145;
//     int original = num;
//     int result  = 0;

//     while(num!=0){

//         int rem = num%10;

//         result = result + fact(rem);

//         num = num/10;
//     }

//     if(result==original){
//         cout<<"yes this is storng number"<<result;
//     }
//     else{
//         cout<<"this is not "<<result;
//     }

// }




