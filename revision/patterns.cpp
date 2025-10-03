#include <iostream>
using namespace std;
/*
n = 4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
void squarePattern(int n)
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

/*
1 2 3
4 5 6
7 8 9
*/
void uniqueSquarePattern(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << k << " ";
            ++k;
        }
        cout << endl;
    }
}

/*
 *
 * *
 * * *
 * * * *
 */
void trianglePattern(int n)
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

/*
1
2 2
3 3 3
4 4 4 4
*/
void numberTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}

/*
1
1 2
1 2 3
1 2 3 4
*/
void numberTrianglePattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

/*
1
2 1
3 2 1
4 3 2 1*/
void reverseNumberTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i - j << " ";
        }

        cout << endl;
    }
}

/*
1
2 3
4 5 6
7 8 9 10
*/
void floydTrianglePattern(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            ++k;
        }
        cout << endl;
    }
}

/*
1 1 1 1
2 2 2
3 3
4
*/
void invertTrianglePattern(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << "  ";
            else
                cout << k << " ";
        }
        ++k;
        cout << endl;
    }
}

/*
            1
        1   2   1
    1   2   3   2   1
1   2   3   4   3   2   1
    */

void pyramidTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        int k = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << k << " ";
            if (j < i)
                k++;
            else
                k--;
        }
        cout << endl;
    }
}

/*
 *
 *       *
 *               *
 *       *
 *
 */
void hollowDiamondStar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void butterflyPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    // squarePattern(4);
    // uniqueSquarePattern(3);
    // trianglePattern(4);
    // numberTrianglePattern(4);
    // numberTrianglePattern2(4);
    // reverseNumberTrianglePattern(4);
    // floydTrianglePattern(4);
    // invertTrianglePattern(4);
    // pyramidTriangle(4);
    // hollowDiamondStar(4);
    butterflyPattern(4);
    return 0;
}