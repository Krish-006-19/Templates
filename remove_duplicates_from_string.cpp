string removeDuplicates(const string &s) {
    unordered_set<char> seen;
    string res;

    for (char c : s) {
        if (!seen.count(c)) {
            seen.insert(c);
            res.push_back(c);
        }
    }
    return res;
}
