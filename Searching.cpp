
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

    long long X;
    cin >> X;
    int position = -1;
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            position = i;
            break;
        }
    }

    cout << position << "\n";
    return 0;
}
