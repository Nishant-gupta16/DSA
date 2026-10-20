#include<iostream>
using namespace std;
#include<vector>
#include<climits>



// int main(){
//     vector<int>arr={2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     int sum =0;
//     int product=1;
//     for(int i=0; i<=size ;i++){
//         sum+=arr[i];
//         product*=arr[i];
//     }
//     cout<<"Sum:-"<<sum<<endl;
//     cout<<"Product:-"<<product;
// }



// int main(){
//     vector<int>arr={1,2,4,6,8,10};
//     int n=6;

//     for(int st=0; st<n; st++){
//         for(int end =st; end<n; end++){
//             for(int i=st; i<=end; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     vector<int>arr={1,-2,4,6,8,-10};
//     int n=6;

//     int maxSum=INT_MIN;

//     for(int st=0; st<n; st++){
//         int arrSum=0;
//         for(int end =st; end<n; end++){
//             arrSum+=arr[end];
//             maxSum=max(arrSum,maxSum);
//         }
//     }

//     cout<<maxSum;;
// }


// int main(){
//     vector<int>arr={1,-2,4,6,8,-10};
//     int n=6;

//     int maxSum=INT_MIN;
//     int arrSum=0;

//     for(int i=0; i<n;i++){
//         arrSum+=arr[i];
//         maxSum=max(arrSum,maxSum);

//         if(arrSum<0){
//             arrSum=0;
//         }
//     }
//     cout<<maxSum;
// }


// int main(){
//     vector<int>arr={2,3,4,5,6};
//     int target=9;

//     vector<int>sum;
    
//     int arrSum=0;
//     int i=0;
//     int j=arr.size()-1;


//     while(i<j){
//         arrSum=arr[i]+arr[j];

//         if(arrSum<target){
//             i++;
//         }
//         else if(arrSum>target){
//             j--;
//         }
//         else{
//             sum.push_back(i);
//             sum.push_back(j);
//             break;
//         }
//     }
//   cout<<sum[0]<<','<<sum[1];
// }



// int main(){
//     vector<int>arr={2,2,2,3,3,3,4,4,5,5,6,6};


//     int st=0; 
//     int end=1;

//     while(end<arr.size()){

//         if(arr[st]!=arr[end]){
//             st++;
//             arr[st]=arr[end];
//         }

//         end++;
//     }
   
//     cout<<"Numbers of unique Number:- "<<st+1;
// }


// int main(){
//     vector<int> arr={1,2,3,1,1,1};
//     int n=arr.size();
//     int ans;

//     for(int val:arr){
//         int frq=0;
//         for(int en: arr){
//             if(val==en){
//                 frq++;
//             }
//         }
//         if(frq>n/2){
//            ans=val;
//         }
//     }
//     cout<<ans;
// }