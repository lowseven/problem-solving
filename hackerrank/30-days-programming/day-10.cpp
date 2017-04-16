#include <iostream>

using namespace std;

int d2b(int num, string oldS = "", string newS = "") {
  if(!(num&1)){
    if(oldS.size()<newS.size()){
      oldS = newS;
    }
    newS = "";
  }else{
    newS += '1';
  }
  if(num == 0)
    return oldS.size();
  return d2b(num/2, oldS, newS);
}

int main() {
  int num;
  cin >> num;
  cout << d2b(num) << endl;
}

