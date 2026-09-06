/*
// so this was selection sort where min is taken to the first place and so on and so on
// input.txt was 6
// 13 46 24 52 20 9
// output.txt was 9 13 20 24 46 52 

#include<bits/stdc++.h>
using namespace std;

void selected_sort(int arr[], int n){
  for(int i = 0; i < n - 1; i++){
    int mini = i;
    for(int j = i; j <= n-1; j++){
      if(arr[j] < arr[mini]){
        mini = j; 
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}
int main () {

  int n; 
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  selected_sort(arr, n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}
*/

/* Bubble Sort 
// same input and output just using bubble sort with O(n^2) and the best time complexity would be n
// now bubble sort 
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
  for(int i = n - 1; i >= 0; i--){
    int didSwap = 0;
    for(int j = 0; j <= i - 1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
        didSwap = 1;
      }
    } 
    if(didSwap == 0){
      break;
    }
  }
} 

int main () {
  int n; 
  cin >> n; 

  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  bubble_sort(arr, n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}
*/


/* Insertion Sort 

// here we take the number right beside and compare and then compare and then compare to the previous like whole not just one and do the sorting so the time complexity would be i guess O(n)
// but boom it was o(n^2) and the best case is O(n)
#include <bits/stdc++.h>
using namespace std;

void insertion_sort (int arr[], int n) {
  for(int i = 0; i <= n - 1; i++){
    int j = i; 
    while (j > 0 && arr[j-1] > arr[j]){
      int temp = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int main () {
  int n; 
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  insertion_sort(arr, n);
  for(int i = 0; i < n; i++ ){
    cout << arr[i] << " ";
  }

}
  
*/