#include<iostream>
using namespace std;

// int main(){
    
//     for(int row=1;row<6;row++){


//         for(int col=row;col>0;col--){
//             cout<<col<<" ";
//         }

//         cout<<endl;
        
      
//     }
//  }

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 






// int main(){
    
//     char p = 'a';
   
//     for(int row=1;row<6;row++){

//         for(int col=row;col>0;col--){

//             cout<<p<<" ";
//         }

//         cout<<endl;
//         p = p+1;
//     }



// }

// a 
// b b
// c c c
// d d d d
// e e e e e





// int main(){

//     for(int row=5;row>0;row--){

//         for(int col=row; col>0;col--){

//             cout<<"*"<<" ";
//         }

//         cout<<endl;


//     }
// }

// * * * * * 
// * * * *
// * * *
// * *
// *




// int main(){


//     for(int row=5;row>0;row--){


//         for(int col=1;col<=row;col++){

//             cout<<col<<" ";
//         }
//         cout<<endl;

//     }
// }

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1








// int main(){

//     for(int row=5;row>0;row--){

//         for(int col=5;col>=row;col--){

//             cout<<col<<" ";
//         }

//         cout<<endl;

//     }
// }

// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1




// int main(){

//     for(int row=5;row>0;row--){

//         for(int col=row-1;col>0;col--){

//             cout<<"-"<<" ";
//         }

//         for(int star=row; star <= 5 ; star++ ){
   
//             cout<<"*"<<" ";
//         }

//         cout<<endl;

//     }


// }


// - - *
// - * *
// * * *









// int main(){

//     for(int row=3;row>0;row--){

//         for(int col=row-1;col>0;col--){
//             cout<<"-"<<" ";
//         }

//         for(int star=row;star<=3;star++){

//             cout<<3-(row-1)<<" ";

//         }

//         cout<<endl;
//     }
// }

// - - 1 
// - 2 2 
// 3 3 3 






// int main(){

//     for(int row=5;row>0;row--){

//         for(int space=row-1;space>0;space--){
//             cout<<"-"<<" ";
//         }

//         for(int star=1;star<=5-(row-1);star++){
//             cout<<star<<" ";
//         }

//         cout<<endl;

//     }
// }
// - - - - 1 
// - - - 1 2
// - - 1 2 3
// - 1 2 3 4
// 1 2 3 4 5











// int main(){

//     for(int row=5;row>0;row--){
        
//         char data = 'A';

//         for(int space=row-1; space>0; space--){
//             cout<<"-"<<" ";
//         }
        
//         for(int num=1; num<=5-(row-1); num++){

//             cout<<data<<" ";
//             data = data + 1;

//         }
//         cout<<endl;
//     }
// }

// - - - - A 
// - - - A B 
// - - A B C 
// - A B C D 
// A B C D E





// int main(){

//     for(int row=5;row>0;row--){

//         for(int space=row-1; space>0;   space--){
//             cout<<"-"<<" ";
//         }

//         for(int star=5-(row-1); star>0;  star--){

//             cout<<star<<" ";
//         }
//         cout<<endl;
//     }
// }
// - - - - 1 
// - - - 2 1
// - - 3 2 1
// - 4 3 2 1
// 5 4 3 2 1




// int main(){

//     for(int row=5; row>0; row--){

//         for(int space1 = row-1; space1>0; space1--){

//             cout<<"-"<<" ";
//         }
        
//         for(int star=1;star<=(((5-row)+1)*2)-1;star++){

//             cout<<"*"<<" ";
//         }

//          for(int space1 = row-1; space1>0; space1--){

//             cout<<"-"<<" ";
//         }

//         cout<<endl;

//     }
// }
// - - - - * - - - - 
// - - - * * * - - -
// - - * * * * * - -
// - * * * * * * * -
// * * * * * * * * *





// int main(){

//     for(int row=0;row<3 ;row++){

//         for(int space=0; space<row; space++){
//             cout<<"-"<<" ";
//         }
        

//         for(int star=0; star<5-(row*2); star++ ){
//             cout<<"*"<<" ";
//         }

//          for(int space=0; space<row; space++){
//             cout<<"-"<<" ";
//         }
        
//         cout<<endl;
//     }
// }

// * * * * * 
// - * * * -
// - - * - -