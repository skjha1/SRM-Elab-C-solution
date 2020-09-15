/*Write a program to print pascal's triangle

Sample Input 1:
5
Output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Sample Input 2:
10
Output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1

5
1
11
121
1331
14641
7
1
11
121
1331
14641
15101051
1615201561
4
1
11
121
1331
*/

#include <iostream>
using namespace std;
int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}
void printPascal(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
            printf("%d",binomialCoeff(line, i));
        printf("\n");
    }
}
int main()
{
  int n;
  cin>>n;
  printPascal(n);

	return 0;
}
