#include <iostream>
using namespace std;
int main()
{
    // QUESTION 1: Print numbers 1 to 4 in a 4x4 grid pattern
    // int num =4;
    // for(int i=1; i<=num; i++){
    //     for(int j=1; j<=num; j++){
    //         cout<<j<< " ";
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 

    // QUESTION 2: Print stars (*) in a 4x4 grid pattern
    // int num =4;
    // for(int i=0; i<num; i++){
    //     for(int j=0; j<num; j++){
    //         cout<<"*"<< " ";
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 

    // QUESTION 3: Print alphabets A to E in each row of 5x5 grid (resetting each row)
    // int num=5;
    // for(int i=0;i<num; i++){
    //     char ch='A';
    //     for(int j=0; j<num;j++){
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 

    // QUESTION 4: Print alphabets continuously (A to Y) in 5x5 grid without resetting
    // int num=5;
    // char ch='A';
    // for(int i=0;i<num; i++){
    //     for(int j=0; j<num;j++){
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // A B C D E 
    // F G H I J 
    // K L M N O 
    // P Q R S T 
    // U V W X Y 

    // QUESTION 5: Print numbers 1 to 64 in an 8x8 grid
    // int n=8;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0; j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1 2 3 4 5 6 7 8 
    // 9 10 11 12 13 14 15 16 
    // 17 18 19 20 21 22 23 24 
    // 25 26 27 28 29 30 31 32 
    // 33 34 35 36 37 38 39 40 
    // 41 42 43 44 45 46 47 48 
    // 49 50 51 52 53 54 55 56 
    // 57 58 59 60 61 62 63 64 

    // QUESTION 6: Print numbers 1 to 36 in a 6x6 grid (note: loop goes <= n, so 6 iterations)
    // int n=5;
    // int num=1;
    // for(int i=0; i<=n;i++){
    //     for(int j=0; j<=n; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1 2 3 4 5 6 
    // 7 8 9 10 11 12 
    // 13 14 15 16 17 18 
    // 19 20 21 22 23 24 
    // 25 26 27 28 29 30 
    // 31 32 33 34 35 36 

    // QUESTION 7: Print right-angled triangle pattern of stars
    // int n=5;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 

    // QUESTION 8: Print triangle with row numbers repeated
    // int n=4;
    // for(int i=0; i<n; i++){
    //     int num=1;
    //     for(int j=0; j<i+1;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1
    // 22
    // 333
    // 4444

    // QUESTION 9: Print triangle with alphabets starting from 'A' each row
    // int n=5;
    // for(int i=0; i<n;i++){
    //     char ch='A';
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE

    // QUESTION 10: Print triangle with continuous alphabets (A to O)
    // int n=5;
    // char ch='A';
    // for(int i=0; i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // A 
    // B C 
    // D E F 
    // G H I J 
    // K L M N O 

    // QUESTION 11: Print triangle with continuous numbers (1 to 10)
    // int n=4;
    // int num=1;
    // for(int i=0; i<n;i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 

    // QUESTION 12: Print triangle with same alphabet per row (A, BB, CCC, etc.)
    // int n=5;
    // char ch='A';
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<i+1; j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }
    // OUTPUT:
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE

    // QUESTION 13: Print Floyd's triangle (numbers 1 to 15)
    // int n=5;
    // for(int i=0;i<n;i++){
    //     int num=1;
    //     for(int j=0;j<i+1;j++){
    //        cout<<num<<" ";
    //        num++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5 

    // QUESTION 14: Print right-angled triangle with numbers 1 to row number
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // QUESTION 15: Print inverted right-angled triangle of numbers (descending)
    // int n=5;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1
    // 21
    // 321
    // 4321
    // 54321

    // QUESTION 16: (Commented out - had a logical error, not executed)

    // QUESTION 17: Floyd's triangle variation with descending numbers in each row
    // int n=5;
    // int num =1;
    // for(int i=0; i<n; i++){
    //     int start=num+i;
    //     for(int j=0;j<=i;j++){
    //         cout<<start--<<" ";
    //     }
    //     num+=i+1;
    //     cout<<endl;
    // }
    // OUTPUT:
    // 1 
    // 3 2 
    // 6 5 4 
    // 10 9 8 7 
    // 15 14 13 12 11 

    // QUESTION 18: Triangle pattern with descending alphabets
    // int n=5;
    // char ch='A';
    // for(int i=0;i<n; i++){
    //     char start =ch+i;
    //     for(int j=0; j<i+1; j++){
    //         cout<<start--<<" ";
    //     }
    //     ch=ch+i+1;
    //     cout<<endl;
    // }
    // OUTPUT:
    // A 
    // C B 
    // F E D 
    // J I H G 
    // O N M L K 

    // QUESTION 19: Print triangle with alphabets A, AB, ABC, etc.
    // int n=4;
    // for(int i=0; i<n; i++){
    //     char ch='A';
    //     for(int j=0; j<i+1; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // A 
    // A B 
    // A B C 
    // A B C D 

    // QUESTION 20: Floyd's triangle with descending numbers (same as question 17)
    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     int start = i + num;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << start-- << " ";
    //     }
    //     num += i + 1;
    //     cout << endl;
    // }
    // OUTPUT:
    // 1 
    // 3 2 
    // 6 5 4 
    // 10 9 8 7 

    // QUESTION 21: Print right-aligned triangle with row numbers
    // int n=5;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // 11111
    //  2222
    //   333
    //    44
    //     5

    // QUESTION 22: Print right-aligned triangle with alphabets (same letter per row)
    // int n=4;
    // char ch='A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }
    // OUTPUT:
    // AAAA
    //  BBB
    //   CC
    //    D

    // QUESTION 23: Print right-aligned triangle with continuous alphabets
    // int n=4;
    // char ch='A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout<<ch++;
    //     }
    //     cout<<endl;
    // }
    // OUTPUT:
    // ABCD
    //  EFG
    //   HI
    //    J
}