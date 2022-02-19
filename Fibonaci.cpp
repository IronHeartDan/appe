#include <iostream>
using namespace std;

// 0 1 1 2 3 5

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout << "Enter Number n\n";
    cin >> n;
    int a = 0;
    int b = 1;
    int sum = 0;
    cout << "\t" << a << "\t" << b;
    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        cout << "\t " << sum;
        a = b;
        b = sum;
    }

    return 0;
}
