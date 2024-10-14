/* #include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "SUM : " << a + b << endl;
} */
/* #include <iostream>
using namespace std;

int main()
{
    int sum = 0, mul = 1, sub, n, rem, que, que2;
    cin >> n;
    int m = n;

    while (que != 0)
    {
        que = n / 10;
        rem = n % 10;
        n = que;
        sum = sum + rem;
    }

    while (que2 != 0)
    {
        que2 = m / 10;
        rem = m % 10;
        m = que2;
        mul = mul * rem;
    }

    sub = mul - sum;
    cout << "SUM = " << sum << endl;
    cout << "MUL = " << mul << endl;
    cout << "SUB = " << sub << endl;
} */
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, mul = 1, sub, n, rem, que, que2;
    cin >> n;
    int m = n;

    while (n!= 0)
    {
        rem = n % 10;
        sum = sum + rem;
        mul = mul * rem;
        n = n / 10;
    }

   
    sub = mul - sum;
    cout << "SUM = " << sum << endl;
    cout << "MUL = " << mul << endl;
    cout << "SUB = " << sub << endl;
}