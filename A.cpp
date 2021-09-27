#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  int count = 0;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  for(int i=0; i<n; i++){
    if(a[i]%2==1){
      cout << a[i] << " ";
    }
  }
}
