#include <iostream>
using namespace std;

int sqrtFind(int n){
  int target = n;
  int start = 0;
  int end = n;
  int mid = start + (end-start)/2;
  int ans = -1;

  while(start <= end){
    if(mid*mid == target){
      return mid;
    }
    if(mid*mid > target){
      end = mid - 1;
    }
    else{
      ans = mid;
      start = mid + 1;
    }
    mid = start + (end-start)/2;
    
  }
}

int main() {
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;

  int ishan = sqrtFind(n);
  cout << "The ans is " << ishan << endl;
  
}