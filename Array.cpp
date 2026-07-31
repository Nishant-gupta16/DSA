#include<iostream>
#include<climits>
using namespace std;

/*
=========================================================
QUESTION 1:
Write a function to double every element of an array.
=========================================================

void changeArr(int arr[], int size){

    for(int i=0; i<size; i++){
        arr[i] = arr[i] * 2;
    }
}

int main(){

    int arr[] = {1,2,3,4};

    changeArr(arr,4);

    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

Output:
2 4 6 8
*/


/*
=========================================================
QUESTION 2:
Write a function to find the index of a given element in
an array. Return -1 if the element is not found.
=========================================================

int check(int arr[], int size, int num){

    for(int i=0; i<size; i++){

        if(arr[i] == num){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[] = {3,5,67,8,9,6,4,5,6,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << check(arr,size,9);

    return 0;
}

Output:
4
*/


/*
=========================================================
QUESTION 3:
Find the index of a given element without using a
function.
=========================================================

int main(){

    int arr[] = {3,5,67,8,9,6,4,5,6,4};

    int value = 67;
    int index = -1;

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){

        if(arr[i] == value){
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}

Output:
2
*/


/*
=========================================================
QUESTION 4:
Print all elements of an array.
=========================================================

int main(){

    int arr[] = {3,5,6,3,2};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){

        cout << arr[i] << " ";
    }

    return 0;
}

Output:
3 5 6 3 2
*/


/*
=========================================================
QUESTION 5:
Find the smallest element in an array.
=========================================================

int main(){

    int arr[] = {3,5,67,8,9,6,4,5,6,4};

    int size = sizeof(arr)/sizeof(arr[0]);

    int smallest = INT_MAX;

    for(int i=0; i<size; i++){

        if(arr[i] < smallest){

            smallest = arr[i];
        }
    }

    cout << "Smallest value = " << smallest;

    return 0;
}

Output:
Smallest value = 3
*/


/*
=========================================================
QUESTION 6:
Find the smallest and largest element in an array using
min() and max().
=========================================================

int main(){

    int arr[] = {83,2,34,5,3,2,3,4,4,3,4,4,5,3,22,4,5,34};

    int size = sizeof(arr)/sizeof(arr[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){

        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest;

    return 0;
}

Output:
Smallest = 2
Largest = 83
*/


/*
=========================================================
QUESTION 7:
Find the index of the smallest and largest element in an
array.
=========================================================

int main(){

    int arr[] = {34,4,5,4,6,4,7,5,4,3,5,6,8,9,9,6,5,7,8,22};

    int size = sizeof(arr)/sizeof(arr[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = 0;
    int largestIndex = 0;

    for(int i=0; i<size; i++){

        if(arr[i] < smallest){

            smallest = arr[i];
            smallestIndex = i;
        }

        if(arr[i] > largest){

            largest = arr[i];
            largestIndex = i;
        }
    }

    cout << "Smallest Index = " << smallestIndex << endl;
    cout << "Largest Index = " << largestIndex;

    return 0;
}

Output:
Smallest Index = 9
Largest Index = 13
*/


/*
=========================================================
QUESTION 8:
Check whether a given element exists in the array or not.
=========================================================

int main(){

    int arr[] = {4,5,2,7,5,6,7,8,5,4};

    int num = 10;

    bool isExisted = false;

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){

        if(arr[i] == num){

            isExisted = true;
            break;
        }
    }

    if(isExisted){

        cout << num << " is existed";
    }
    else{

        cout << num << " is not existed";
    }

    return 0;
}

Output:
10 is not existed
*/