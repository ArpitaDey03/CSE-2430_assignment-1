#include <bits/stdc++.h>
using namespace std;

void binarySearch(const vector<long long>& A, long long X) {
    int left = 0, right = A.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == X) return true;
        else if (A[mid] < X) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++) {
        long long X;
        cin >> X;
        if (binarySearch(A, X))
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}
