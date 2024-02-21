#include <iostream>
using namespace std;

// For Integers
int main() 
{
    // Size of array as input
    int n;
    cin >> n;
    int arr[n];
    // Iterating to take the inputs of an array
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    // Declaring a hash
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
      hash[arr[i]] += 1;
    }
    
    // Size of queries
    int q;
    cin >> q;
    // Interating to take the inputs of queries
    while(q--){
      int num;
      cin >> num;
      
      cout << num << " -> " << hash[num] << endl;
    }
    
    
    return 0;
}

/*
Input : 
5 // Size of Array
3 2 1 1 2 // Array elements
5 // No of queries
1
8
2
3
10

Output : 
1 -> 2
8 -> 0
2 -> 2
3 -> 1
10 -> 0
*/

// For Characters
int main() 
{
  
  string s;
  cin >> s;
  
  int hash[26] = {0};
  for(int i = 0; i < s.size(); i++){
    hash[s[i] - 'a'] += 1;
  }
  
  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    char ch;
    cin >> ch;
    
    cout << ch << " -> " << hash[ch - 'a'] << endl;
  }
  
}
/*
Input : 
cdclhd
5
a
c
m
h
d

Output : 
a -> 0
c -> 2
m -> 0
h -> 1
d -> 2
*/