#include <iostream>
using namespace std;

int main()
{

    int a[] = {74, 32, 89, 21, 55};
    int n = 5;

    int key, i, j;

    for (int j = 1; j < 5; j++)
    {

        key = a[j];
        i = j - 1;

        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }

    for (int k = 0; k < 5; k++)
    {
        cout << a[k] << " ";
    }
}

