vector<int> prefix(n+1, 0);
for (int i = 0; i < n; i++)
    prefix[i+1] = prefix[i] + a[i];

int sum = prefix[r+1] - prefix[l];
