#include<iostream>
#include <climits>
using namespace std;


int main(){

           
    // int arr[]={3,5,6,3,2};
    // int size= sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<size; i++){
    //     cout<<arr[i];
    // }


    // int arr[]={3,5,67,8,9,6,4,5,6,4};

    // int size=sizeof(arr)/sizeof(arr[0]);
    //  int small=INT_MAX;

    // for(int i=0; i<size;i++){
       
    //     if(arr[i]<small){
    //         small=arr[i];
    //     }
    // }
    // cout<< "Smallest value is :-"<<small;



    // int arr[]={83,2,34,5,3,2,3,4,4,3,4,4,5,3,22,4,5,34};
    // int size=(sizeof(arr)/sizeof(arr[0]));
    // int smallest=INT_MAX;
    // int largest= INT_MIN;

    // for(int i=0; i<size; i++){
    //     smallest=min(arr[i],smallest);
    //     largest=max(arr[i],largest);
    // }

    //  cout<<"Smallest:- "<<smallest<<endl;
    //  cout<<"largest:- "<<largest;


    int arr[]={34,4,5,4,6,4,7,5,4,3,5,6,8,9,9,6,5,7,8,22};
    int size= sizeof(arr)/sizeof(arr[0]);
     int smallest=INT_MAX;
     int largest=INT_MIN;

     int smallestIndex=0;
     int largestIndex=0;

     for(int i=0; i<size; i++){
         
        if(arr[i]<smallest){
            smallest=arr[i];
            smallestIndex=i;
        }
        if(arr[i]<largest){
            largest=arr[i];
            largestIndex=i;
        }
     }

     cout<<"Index of smallest Number:- "<<smallestIndex<<endl;
     cout<<"Index of largest Number:- "<<largestIndex;


}