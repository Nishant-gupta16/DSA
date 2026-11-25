#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include <algorithm>    



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

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int size = arr.size();
//     for(int st=0; st<size; st++){
//         for(int j=st; j<size; j++){
//             for(int i=st; i<=j; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";

//         }
//         cout<<endl;
//     }
// }


// int main(){
//     vector<int> arr={1,2,3,-4,5,-2};
//     int size=arr.size();
//     int maxSum=INT_MIN;

//     for(int st=0; st<size; st++){
//         int cm=0;
//         for(int i=st; i<size; i++){
//             cm+=arr[i];
//             maxSum=max(cm,maxSum);
//         } 
//     }
//     cout<<maxSum;
// }


// int main(){
//     vector <int> arr={-2,-3,-4,-4,-2,-1};
//     int cm =0; int maxSum=INT_MIN;

//     for(int i=0; i<arr.size(); i++){
//         cm+=arr[i];
//         maxSum= max(cm,maxSum);
//         if(cm<0){
//             cm=0;
//         }
//     }
//     cout<<maxSum;
// }


// int main(){
//     vector<int>arr={1,2,3,4,5};
//     int target=9;
//     vector<int>ans;
//     int size =arr.size();

//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if (arr[i]+arr[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//    cout<<ans[0]<<","<<ans[1];

// }

// int main(){
//     vector<int> arr= {2,3,4,5,6};
//     vector<int>ans;
//     int target=9;
//     int size=arr.size();
//     int ps=0;

//     int st=0; int end=size-1;
    
//     while(st<end){
//         ps=arr[st]+arr[end];

//         if (ps==target){
//               ans.push_back(st);
//               ans.push_back(end);
//               break;
//         }
//        else if(ps>target){
//             end--;
//         }
//         else{
//             st++;
//         }  
//     }
//     for(int i: ans){
//         cout<<i<<" ";
//     }
// }

// int main(){
//     vector<int>arr={2,1,1,3,1,1};
//     int mj= arr.size();
   
//     for(int i:arr){
//          int freq=0;
//         for(int j:arr){
//             if (i==j){
//                 freq++;
//             }
//         }
//         if(freq>mj/2){
//             cout<<i;
//         }        
//     }
// }

int main(){
    vector<int>arr={2,2,3,2,1};
   
    int size=arr.size();
    int freq=0; int ans=0;

    for(int i=0; i<size; i++){

        if(freq==0){
            ans =arr[i];
        }
        if(ans==arr[i]){
           freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
}
