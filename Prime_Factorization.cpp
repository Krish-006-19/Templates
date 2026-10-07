vector<ll> prime_factorize(ll x) {
    vector<ll> pri;

    for (ll i = 2; i * i <= x; ++i) {
        if (x % i != 0) continue;

        pri.push_back(i);

        while (x % i == 0) {
            x /= i;
        }
    }

    if (x > 1) pri.push_back(x);

    return pri;
}
