void sliding_frequncy_subarray_calculator() {
  vector<pair<int,int>> runs;
  
  for (int i = 0; i < n; ) {
      int j = i;
      while (j < n && a[j] == a[i]) j++;
  
      runs.push_back({a[i], j - i});
      i = j;
  }
}
