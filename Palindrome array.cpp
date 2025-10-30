#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
