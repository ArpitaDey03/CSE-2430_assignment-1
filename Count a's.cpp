
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int Q;
    cin>> S>> Q;

    while(Q--)
    {
        int L,R;
        cin>> L>> R;
       int countA=0;

     for (int i = L - 1; i < R; i++)
        {
            if (S[i] == 'a')
            {
                countA++;
            }
        }
        cout << countA << endl;
    }

    return 0;
}
