// Maps has more storage capacity than array hasshing
// Maps store all the elements in sorted order
#include <iostream>
#include <map>
using namespace std;

// Maps
int main(){
    // For INT
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    // pre-compute
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
      mpp[arr[i]]++;
    }
    
    int q;
    cin >> q;
    while(q--){
      int num;
      cin >> num;
      
      // fetch
      cout << num << " -> " << mpp[num] << endl;
    }
    
    return 0;
}

int main() 
{
    // For CHAR
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    // pre-compute
    map<char, int> mpp;
    for(int i = 0; i < n; i++){
      mpp[arr[i]]++;
    }
    
    int q;
    cin >> q;
    while(q--){
      char ch;
      cin >> ch;
      
      // fetch
      cout << ch << " -> " << mpp[ch] << endl;
    }
    
    return 0;
}