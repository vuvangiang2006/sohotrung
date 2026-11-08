#include <bits/stdc++.h>

using namespace std;
int A[105];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int Amax = A[0], Amin = A[0];
    for (int i = 0; i < n; i++)
    {
        Amax = max(Amax, A[i]);
        Amin = min(Amin, A[i]);
    }
    cout << Amax << " " << Amin;
    return 0;
}
