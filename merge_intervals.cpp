static bool cmp(const pll& a, const pll& b) {
    return a.first < b.first;
}

vllp mergeIntervals(vllp& intervals) {
    if (intervals.empty()) return {};

    sort(intervals.begin(), intervals.end(), cmp);

    vllp merged;
    merged.push_back(intervals[0]);

    for (ll i = 1; i < intervals.size(); i++) {
        if (intervals[i].first <= merged.back().second) {
            merged.back().second = max(merged.back().second, intervals[i].second);
        } else merged.push_back(intervals[i]);
    }
    return merged;
}
