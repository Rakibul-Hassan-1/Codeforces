#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k, int x)
{
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        string fatores(n, '1');
        cout << fatores.substr(1) << endl;
        return;
    }

    for (int i = 2; i <= k; i++)
    {
        int nn = n;
        int cont = 0;
        string fatores = "";
        while (nn > k)
        {
            cont++;
            fatores += ' ' + to_string(i);
            nn -= i;
        }
        if (nn > 1)
        {
            cont++;
            fatores += ' ' + to_string(nn);
            cout << "YES" << endl;
            cout << cont << endl;
            cout << fatores.substr(1) << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int num_testes;
    cin >> num_testes;
    for (int i = 0; i < num_testes; i++)
    {
        int n, k, x;
        cin >> n >> k >> x;
        solve(n, k, x);
    }

    return 0;
}
