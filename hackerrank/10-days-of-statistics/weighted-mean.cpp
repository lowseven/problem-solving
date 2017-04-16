//https://www.hackerrank.com/challenges/s10-weighted-mean/submissions/code/32471334
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, contw=0, contx=0;
    cin >> n;
    int x[n];
    int w[n];
    
    for(int i=0; i<n; ++i){
        cin >> w[i];
    }
    
    for(int i=0; i<n; ++i){
        cin >> x[i];
    }
    
    for(int i=0; i<n; ++i){
        contw += w[i] * x[i];
        contx += x[i];
    }
    
    cout << fixed << setprecision(1) << contw/(contx*1.0) << endl;
    return 0;
}