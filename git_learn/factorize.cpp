#include<iostream>
using namespace std;

int main(){
  long n, i; cin >> n;
  bool not1st = false;
  
  if(n == 1 || n == 0) cout << n <<" = " << n << endl;
  else if(n < 0) cout << "Don't type a negative integer!" << endl;
  else{
    cout << n << " = ";
    for(i=2; i*i <= n; i++){
      while(n % i == 0){
        n /= i;
        if(not1st) cout << " * ";
	else not1st = true;
	cout << i;
      }
    }
    if(n != 1){
	if(not1st) cout << " * ";
        cout << n;
    }
    cout << endl;
  }
  
  return 0;
}
