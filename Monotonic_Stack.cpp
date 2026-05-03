vector<int> nextGreaterRight(vector<int>& a) {
    int n = a.size();
    vector<int> res(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (!st.empty()) res[i] = a[st.top()];
        st.push(i);
    }
    return res;
}
