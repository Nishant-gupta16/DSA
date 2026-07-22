#include <iostream>
using namespace std;


// Q1. Decimal to Binary------------.
int toBinary(int num){
    int pow=1;
    int ans=0;

    while(num>0){
        int rem=num%2;
        num=num/2;

        ans=ans+(pow*rem);
        pow*=10;

    }

    cout<<"Binary value is:- "<<ans<<endl;
}


// Q2. Binary to Decimal-------------------.
int toDecimal(int binaryNum)
{
    int ans = 0;
    int pow = 1;

    while (binaryNum > 0)
    {
        int rem = binaryNum % 10;
        binaryNum = binaryNum / 10;

        ans = ans + (rem * pow);

        pow = pow * 2;
    }

    cout <<"Decimal value is:- "<< ans;
}

int main()
{
    toBinary(10);
    toDecimal(101);
}