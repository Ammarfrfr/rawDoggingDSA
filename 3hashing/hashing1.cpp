/*
Hashing is done using
i. division method
ii. folding method
iii. mid square method
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

  // so globally for int the max would be 10^7 and the main would be 10^6
  // for boolean the max would be be 10^8 and the main would be 10^7

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
*/

/* so this is on how to count string using hashing
// now counting the strings

input.txt
abcdabehf
5
a
g
h
b
c
output.txt
2
0
1
2
1

#include <bits/stdc++.h>
using namespace std;

int main () {

  string s;
  cin >> s;

  // precompute
  int hash[26] = {0};
  for(int i = 0; i < s.size(); i++){
    hash[s[i] - 'a']++;
  }

  int q;
  cin >> q;
  while(q--){
    char c;
    cin >> c;   

    // fetch
    cout << hash[c - 'a'] << endl;
  }

  return 0;
}
*/

// we need to take hash[256] if nothing is written 


// now we are doing the same hashing thing using map which we learned in STL
/*
here is the input.txt
7
1 2 3 1 3 2 12
5
1
2
3
4
12
and here is the ouput.txt
1->2
2->2
3->2
12->1
2
2
2
0
1
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main () {

  int n;
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // precompute stuff using maps
  map<int, int> mpp;
  for(int i = 0; i < n; i++){
    mpp[arr[i]]++;
  }

  // so this is how we iterate map in stl
  // if you wanna see which key has which value here you go
  for(auto it: mpp){
    cout << it.first << "->" << it.second << endl;
  }
  // so this is how we iterate in ths map

  int q;
  cin >> q;
  while (q--){
    int number; 
    cin >> number;

    cout << mpp[number] << endl;
  }

  return 0; 
}



// The time complexity of input of string and fetch is always log n

// now we would do the upper one in unordered map using 
// unordered_map<int, int> mpp;

// and for that input.txt would be the same as the above and the output.txt would be like this
// 3->2
// 12->1
// 2->2
// 1->2
// 2
// 2
// 2
// 0
// 1

// so the time complexity of unordered map is O(1) for the best case and worst is O(n) due to colision
*/


/*
// For frequencies of Elements
class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int, int> mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        vector<vector<int>> answer;
        for(auto it : mpp){
            answer.push_back({it.first, it.second});
        }
        return answer;
    }
};

Input: arr[] = [1, 5, 6, 7, 7]
Output: [[1, 1], [5, 1], [6, 1], [7, 2]]

Here how many times the number comes 
*/

