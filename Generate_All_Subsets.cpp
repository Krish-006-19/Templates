    int n = set.size();
    for (int i = 0; i < (1 << n); ++i) {
        std::cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                std::cout << set[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
