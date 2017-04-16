//link: https://www.hackerrank.com/challenges/s10-basic-statistics
#include <iostream>
#include <cstdio>

using namespace std;

void swap(int& a, int& b){
  a ^= b;
  b ^= a;
  a ^= b;
}

void quickSort(int arr[], int f, int l){
  int middle = (f+l)/2;
  int pivot = arr[middle];
  int i = f;
  int j = l;

  do{
    while(arr[i] < pivot) ++i;
    while(arr[j] > pivot) --j;
    if(i<=j){
      if(i < j)
        swap(arr[i], arr[j]);
      ++i;
      --j;
    }
  }while(i <= j);
  if(f<j)
      quickSort(arr, f, j);
  if(i<l)
    quickSort(arr, i, l);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int n, moda = 0;
    double mean = 0;
    double cache[10*100000];
    
    cin >> n;
    int array[n];
    for(int i=0; i<n; ++i){
        cin >> array[i];
        mean += array[i];
    }

    quickSort(array, 0, n-1);
    
    for(int i=0; i<n; ++i){  
        cache[array[i]] += 1;
        moda = (cache[array[i]]>cache[moda]) ? array[i] : moda;
    }
    int middle = n/2;
   
    printf("%.1lf\n%.1lf\n%d\n", mean/(n*1.0), (array[middle-1]+array[middle])/2.0, moda);
    return 0;
}
