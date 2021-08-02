#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int j;
    for (j = 11; j <= n; j++)
    {
        int sum = 0;
        int currentnum = j;
        int length = countDigit(j);
        while (j > 0)
        {
            int lastdigit = j % 10;
            sum += pow(lastdigit, length);
            j = j / 10;
        }
        if (sum == currentnum)
        {
            cout << currentnum << endl;
        }
        j = currentnum;
       
    }

    return 0;
}
