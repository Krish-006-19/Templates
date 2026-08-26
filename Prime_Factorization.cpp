vector<long long> primeFactors(long long n) {
    vector<long long> factors;

    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    for (long long p = 3; p * p <= n; p += 2) {
        while (n % p == 0) {
            factors.push_back(p);
            n /= p;
        }
    }

    if (n > 1)
        factors.push_back(n);

    return factors;
}
