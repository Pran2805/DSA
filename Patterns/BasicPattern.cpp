#include <iostream>
using namespace std;

// when n =4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
void numberPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// when n = 3
// 1 2 3
// 4 5 6
// 7 8 9
void numberPattern2(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// star pattern n = 4
// *
// * *
// * * *
// * * * *
void starPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// where n = 4
//  1
//  2 2
//  3 3 3
//  4 4 4 4
void numberPattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

// where n = 4
// 1
// 1 2
// 1 2 3
// 1 2 3 4
void numberPattern4(int n)
{
    int count;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// where n = 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10
void numberPattern5(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// where n = 4
// 1 1 1 1
//   2 2 2
//     3 3
//       4
void numberPattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            (i == j || j <= i) ? cout << " " : cout << i;
            cout << " ";
        }
        cout << endl;
    }
}

// where n =4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
void startPattern2(int n)
{
    int count;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        count--;
        for (int k = 0; k < i - 1; k++)
        {
            if (count != 0)
            {
                count--;
                cout << count;
            }
        }

        cout << endl;
    }
}

// star pattern
//      *
//    *   *
//  *       *
//*           *
//  *        *
//    *    *
//       *

void starPattern3(int n){
    //top part
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*n - 1; j++) {
            if (j == n - i + 1 || j == n + i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    // just the ith for loop value is changed inside part is working properly
        //bottom part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2*n - 1; j++) {
            if (j == n - i + 1 || j == n + i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}


// n =4
void butterFlyPattern(int n){
    // top part of pattern 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            
            if(j <=i || j>=n-i+3){
                cout << "*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // bottom part of pattern 
   for(int i = n; i > 0; i--){
        for(int j = 0; j < 2*n; j++){
            
            if(j <=i-1 || j>=n-i+4){
                cout << "*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    // numberPattern(4);
    // numberPattern2(3);
    // starPattern(4);
    // numberPattern3(5);
    // numberPattern4(4);
    // numberPattern5(4);
    // numberPattern6(4);
    // startPattern2(4);
    // starPattern3(4);
    butterFlyPattern(4);

    return 0;
}