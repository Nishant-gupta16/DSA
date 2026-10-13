#include<iostream>
using namespace std;

// int main (){
//       int a=4;
//       int b=5;
//       int sum=a+b;
//          cout<<sum;

// }

// int main (){
//     string a;
//     cout<<"Enter your name:-";
//     cin>>a;
//     cout<<a;
// }


// int main(){
//     string name;
//     int age;
//     cout<<"Enter your name:-";
//     cin>>name;
//     cout<<"Age:-";
//     cin>>age;
//      if(age>=18 && age <=60){
//         cout<<"You are eligible to Drive.";
//      }
//      else if(age >= 60){
//         cout<<"You are not eligible because your age is over.";
//      }
//      else{
//         cout<<"You are not eligible to Drive.";
//      }
//      return 0;
// }

// int main(){
//     char ch;
//      cout<<"Enter Character:-";
//      cin>>ch;

//      if(ch>='a' && ch<='z'){
//         cout<<"To Lowercase";
//      }
//      else{
//         cout<<"TO Uppercase";
//      }
// }

// int main(){
//     char ch;
//      cout<<"Enter Character:-";
//      cin>>ch;
//      ch>='a' && ch<='z'?cout<<"To Lowercase": cout<<"TO Uppercase";
// }

// int main(){
//     int table=1;

//     while(table<=10){
//         cout<<table*2<<endl;
//         table++;
//     }

// }

// int main(){
//     int num=3;
//     int sum=0;

//     for(int i=0; i<=num; i++){
//         if (i%2!=0){
//             sum+=i;  
//         }
//     }
//      cout<<"Sum of odd number:- "<<sum;
// }

// int main(){
//     int n=5;
//     for(int i =0; i<n;i++){
//         for(int j=1; j<n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0; i<n;i++){
//         for(int j=1;j<n;j++){
//             cout<<num;
//             num++;

//         }
//         cout<<endl;
//     }
// }


// int main(){
//     char ch='a';
//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             cout<<ch<<' ';
//             ch+=1;

//         }
//         cout<<endl;

//     }
// }


// int main(){
//     char ch='A';
    
//     for(int i=0; i<5; i++){
//         for(int j=0; j<i;j++){
//             cout<<ch<< " ";
//             ch+=1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=5;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int n=5;
//     for(int i=0 ;i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int n=5;
//     char ch='A';
//     for(int i=0; i<n; i++){
        
//         for(int j=0; j<=i; j++){
//             cout<<ch<<' ';
//             ch+=1;
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<i+1<<' ';
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     for(int i=0; i<5; i++){
//         int num=1;
//         for(int j=0; j<=i; j++){
//             cout<<num;
//            num++;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=5;
//     int num=1;
//     for(int i=0; i<n; i++){
        
//         for(int j=i; j>0; j--){

//             cout<<num;
//             num++;
           

//         }
//         cout<<endl;
      
//     }
// }

// int main(){
//     char ch='A';

//     for(int i=0; i<5; i++){
//         for(int j=i; j>0 ; j--){
//             cout<<ch;
//             ch+=1;

//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<' ';
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<' ';
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<ch;
//         }
//         ch++;
//         cout<<endl;
//     }
// } 

// int main (){
//     int n=4;
//     char ch ='A';

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch;
           
//         }
//         ch++;
//         cout<<endl;
//     }

// }

// int main(){
//     int n=10;
//     // int num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
           
//         }
//          for(int j=0; j<i+1; j++){
//                 cout<<"*";
//             }
//             for(int j=i; j>0; j--){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
           
//         }
//          for(int j=1; j<=n-i; j++){
//                 cout<<"*";
//             }
//             for(int j=0; j<n-i-1; j++){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=5;
// for(int i=0; i<n; i++){
//     for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     if (i!=0){
//         for(int j=0; j<2*i-1; j++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i=0; i<n-1; i++){
//     for(int j=0; j<=i+1; j++){
//         cout<<" ";

//     }
//     cout<<"*";
//     // for(int j=0; j<2*i+1; j++){
//     //     cout<<" ";
//     // }
//     // cout<<"*";
//     cout<<endl;
    
// }


// }
// int  sumN(int n){
//     int sum=0; 
//     for(int i=0; i<= n; i++){
//         sum+=i;
    
//     }
//     return sum; 
// }

// int main(){

//     cout<<"sum of n number :-"<<sumN(4);
    
// }

// int factN(int n){
//     int fact=1;
//     for(int i=1; i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     cout<<"fact of n numbers:-"<<factN(4);
// }

// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }

       
//         for(int j=0; j<=i; j++){
//             cout<<"*";
//         }

//         for(int j=0; j<i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int num=0;

//     bool isPrime=true;

//     for(int i=2; i*i<num; i++){

//         if(num%i==0){
//             isPrime=false;
//         }
//     }
//     if(isPrime==true){
//         cout<<num<<" Is Prime.";
//     }
//     else{
//         cout<<num<< " Is Notprime.";
//     }
// }


// int binary(int num){
//     int ans=0; 
//     int pow=1;
//     while(num>0){
//         int rem=num%2;
//         num/=2;
//         ans+=(rem*pow);
//         pow*=10;
//     }
//     return ans;

// }

// int main(){

//     cout<<binary(50);

// }

// #include <climits>
// int main(){

//     int arr[]={23,21,2,34,2,5};
//     int size =sizeof(arr)/sizeof(int);
//     int smallest=INT_MAX;
    
//     for(int i=0; i<size; i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }

//     }
//     cout<<smallest;
// }

// #include <climits>
// int main(){
// int arr[]={34,56,22,4,4,53,5,6,5,334};
// int size=sizeof(arr)/sizeof(int);
// int largest=INT_MIN;

// for(int i=0;i<size; i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
// }
// cout<<largest;
// }

// void arrC(int arr[],int size){
//     for(int i=0; i<size; i++){
//         arr[i]*=2;
//     }
// }

// int main(){
//     int arr[]={1,2,3};
//     int size=sizeof(arr)/sizeof(int);

//     arrC(arr,size);

//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size=sizeof(arr)/sizeof(int);
//     int value;

//     for(int i=0;i<size; i++){
//         value=arr[i];
//         cout<<value<<endl;
//     }
// }


// int main(){
//     int arr[]={2,4,6,8,10,23,21,1,2,3,46,6,7,8,8,12,14,16,18,20,22,24,26};
//     int size = sizeof(arr)/sizeof(int);
//     int target=4;

//     for(int i=0; i<size; i++){
//         if (arr[i]==target){
//             cout<<i;
//         }
//     }
//     return -1;
// }


// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size = sizeof(arr)/sizeof(int);
//     cout<<size;
// }


// #include<vector>
// int main(){

//     vector<int>vec= {1,2,3,4,5,6};
//     // vec.pop_back();
//     // vec.push_back(12);
//     // cout<<vec.front()<<endl;
//     // cout<<vec.back()<<endl;
//     // cout<<vec.at(3)<<endl;

//      for(int value : vec){
//         cout<<value;
//     }

// }

// #include<vector>

// int main(){

//     // vector<int>vec;
//     // vec.push_back(0);
//     // vec.push_back(1);
//     // vec.push_back(3);
//     // vec.push_back(3);
//     // vec.push_back(3);


//     cout<<vec.size()<<endl;
//     cout<<vec.capacity();

// }



// int main(){
//     int arr[]={2,3,4,5};
//     int size = sizeof(arr)/sizeof(int);

//     for(int st=0; st<size; st++){
//         for(int end=st; end<size; end++){
//             for(int i=st; i<=end; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<vector>
// int main(){
//     vector<int>vec={2,3,4,5,6,7};

//     int st=0;
//     int end=vec.size()-1;

//     while(st<end){
//         swap(vec[st],vec[end]);
//         st++;
//         end--;
//     }

//     for(int i : vec){
//         cout<<i<<" ";
//     }


// }

// #include<vector>

// int main(){
//     vector<int>arr={2,3,4,5,6};

//     int sum=0;
//     int product=1;

//     for(int i:arr){
//         sum=i+sum;
//         product=i*product;
//     }

//     cout<<"sum:- "<<sum<<endl;
//     cout<<"product:- "<<product;
// }

// int main(){
//     int num=12;

//     if(num%2==0){
//     cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
// }


// int main(){

//     int num=-1;

//     if(num>0){
//         cout<<"Positive";
//     }
//     else if(num==0){
//         cout<<"Zero";
//     }
//     else{
//         cout<<"Nigative";
//     }
// }

// int main(){
//     int a=3,b=6;
//    cout<<"Before swap Number a:-"<<a<<" "<<"b:-"<<b<<endl;

//    int tamp=a;
//    a=b;
//    b=tamp;
   

//    cout<<"After swap number a:-"<<a<<" "<<"b:-"<<b;
// }


// int main(){
//     int a=5; 
//     int b=9;

//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<" "<<b;
// }

// int main(){
//     int num=1234;
//     int revers=0;

//     int tamp=num;

//     while(tamp !=0){

//         int disit =tamp%10;
//         revers=revers*10+disit;
//         tamp/=10;
//     }
//      cout<<revers;
//      return 0;

// }

// int main(){
//     int num=121;
//     int rev=0;

//     int tamp=num;
//     while(tamp!=0){
//         int disit= tamp%10;
//         rev=rev*10+disit;
//         tamp/=10;
//     }
//     if(rev==num){
//         cout<<"palindrom";
//     }
//     else{
//         cout<<"Not palindrom";
//     }
// }

// int main(){
//     int num=121;
//     bool ispalindrom=true;
//     for(int i=2; i*i<num; i++){

//         if(num%i==0)
//         {
//             ispalindrom=false;
//         }
       
//     }
//     if(ispalindrom==true){
//         cout<<"palindrom";
//     }
//     else{
//         cout<<"not palindrom";
//     }
//     return 0;
// }


// int main(){
//     int num=5;
//     int fact=1;

//     for(int i=1; i<=num; i++){
//         fact*=i;

//     }
//     cout<<fact;
// }
 

// int main(){
//     int num=1234;
//     int sum=0;
//     while(num!=0){
//         int digit=num%10;
//         sum+=digit;
//         num/=10;
//     }

//     cout<<sum;
// }

// int main(){

// }