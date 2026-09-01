
// so we find how many times the number occurs 

// according to what i see, the time complexity is O(n+q) because only for n times the hashing problem will go and remeber how many times what comes and then whatever question it would be then we would just add that in the complexity 
// and just because we add it and it would be so minisule that it wouldnt be considered


#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // so globally for int the max would be 10^8 and the main would be 10^7
  // for boolean the max would be be 10^9 and the main would be 10^8 

  // precompute
  int hash[13] = {0};
  for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
  }


  int q; 
  cin >> q;

  while(q--){
    int number;
    cin >> number;
    
    // fetch
    cout << hash[number] << endl;
  }
  return 0;
}
