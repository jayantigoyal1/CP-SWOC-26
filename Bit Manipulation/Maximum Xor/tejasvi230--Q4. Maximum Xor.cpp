#include <bits/stdc++.h>
using namespace std;

static int trie[32 * 100000][2];
static int nodes = 1; // root = 0

// insert number into trie
void insert(int x) {
    int cur = 0;
    for (int b = 31; b >= 0; b--) {
        int bit = (x >> b) & 1;
        if (!trie[cur][bit])
            trie[cur][bit] = nodes++;
        cur = trie[cur][bit];
    }
}

// get maximum XOR with x
int maxXor(int x) {
    int cur = 0, res = 0;
    for (int b = 31; b >= 0; b--) {
        int bit = (x >> b) & 1;
        if (trie[cur][1 - bit]) {
            res |= (1 << b);
            cur = trie[cur][1 - bit];
        } else {
            cur = trie[cur][bit];
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> nums(n);
    for (int &x : nums) cin >> x;

    vector<array<int,3>> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1];
        queries[i][2] = i;
    }

    sort(nums.begin(), nums.end());
    sort(queries.begin(), queries.end(),
         [](auto &a, auto &b) { return a[1] < b[1]; });

    vector<int> ans(q, -1);
    int idx = 0;

    for (auto &qr : queries) {
        int x = qr[0], m = qr[1], id = qr[2];

        // insert all nums <= m
        while (idx < n && nums[idx] <= m) {
            insert(nums[idx]);
            idx++;
        }

        if (idx > 0)
            ans[id] = maxXor(x);
    }

    for (int x : ans) cout << x << " ";
    return 0;
}
