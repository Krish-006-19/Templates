void sliding_frequncy_subarray_calculator() {
  // vector<pair<int,int>> runs;
  
  // for (int i = 0; i < n; ) {
  //     int j = i;
  //     while (j < n && a[j] == a[i]) j++;
  
  //     runs.push_back({a[i], j - i});
  //     i = j;
  // }

  	vector<pair<int, int>> b;
	for (int i = 0; i < n; i++){
		if (b.empty() || b.back().first != a[i]){
			b.emplace_back(a[i], 1);
		}
		else{
			b.back().second++;
		}
	}
}
