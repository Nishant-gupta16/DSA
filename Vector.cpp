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


int main(){
    vector<int>arr={1,-2,4,6,8,-10};
    int n=6;

    int maxSum=INT_MIN;
    int arrSum=0;

    for(int i=0; i<n;i++){
        arrSum+=arr[i];
        maxSum=max(arrSum,maxSum);

        if(arrSum<0){
            arrSum=0;
        }
    }
    cout<<maxSum;;
}

