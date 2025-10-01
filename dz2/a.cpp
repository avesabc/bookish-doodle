#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PUSH push_back
#define POP pop_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    int count = 0;

    while(t--) {
        int a, b;

        cin >> a >> b;

        int MAX = max(a, b);
        int MIN = min(a, b);

        while(MAX != MIN) {
            if(MAX - MIN > 10) {
                MAX -= 10;
                count++;
            } else {
                MAX -= MIN;
                count++;
            }
            cout << count << '\n';
        }
    }
}