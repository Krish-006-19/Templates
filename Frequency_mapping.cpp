    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};

    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    for (auto &p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }
