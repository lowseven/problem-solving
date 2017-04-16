#include<iostream>
#include<map>

using namespace std;

int main(){
  std::map<std::string, std::string> data;
  int t=0;
  std::string key, value;
  cin >> t;
  cin.ignore();
  for(int i=0;i<t; i++){
    cin >> key >> value;
    data[key] = value;
  }
  while(cin >> key){
    if(data[key] == "")
      cout << "Not found" << endl;
    else
      cout << key << '=' << data[key] << endl;
  }
} 