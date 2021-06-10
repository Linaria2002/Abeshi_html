#include<bits/stdc++.h>
using namespace std;

int main(){
  long n; cin >> n;
  bool not1st = true;
  
  if(n == 1 && n == 0) cout << n <<" = " << n << endl;
  if(n < 0) cout << "Don't type a negative integer!" << endl;
  else{
    cout << n << " = ";
    for(int i=2; i*i < n; i++){
      while(n%i == 0){
        n /= i;
        if(not1st) cout << " * ";
	cout << i;
      }
    }
    if(i != 1) cout << " * " << i;
    cout << endl;
  }
  
  return 0
}
