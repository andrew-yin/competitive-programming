// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000001

int A[10001];
 
int spf[MAXN];
 
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
 
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

unordered_map<int, int> getFactorization(int x)
{
    unordered_map<int, int> factors;
    while (x != 1)
    {
        factors[spf[x]]++;
        x = x / spf[x];
    }
    return factors;
}

void solve() {
    int n; cin >> n;

    unordered_map<int, int> lcm;
    unordered_map<int, unordered_map<int, int>> factorizations;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        unordered_map<int, int> factored = getFactorization(A[i]);

        factorizations[A[i]] = factored;
        for (const auto& j : factored) {
            lcm[j.first] = max(lcm[j.first], j.second);
        }
    } 

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        unordered_map<int, int> factored = factorizations[A[i]];
        long long part = 1;
        for (const auto& j : lcm) {
            int diff = j.second - factored[j.first];
            long long power = ((int) pow(j.first, diff) % 1000000007);
            part = ((part * power) % 1000000007);
        }
        ans = ((ans + part) % 1000000007);
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sieve();
    solve();

    return 0;
}
