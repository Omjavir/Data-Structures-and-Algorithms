#include <bits/stdc++.h>
using namespace std;

int main(){

// Pattern 1
/*
	* * *
	* * *
	* * *
*/
for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << "* ";
		}
		cout << endl;
	}

// Pattern 2
/*
	*
	* *
	* * *
*/
for(int i = 0; i <= n; i++){
		for(int j = 0; j < i; j++){
			cout << "* ";
		}
		cout << endl;
	}

	// Pattern 3
	/*
		1
		1 2
		1 2 3
	*/
for(int i = 1; i <= n; i++){
  		for(int j = 1; j <= i; j++){
  			cout << j << " ";
  		}
  		cout << endl;
  	}
    
// Pattern 4
/*
	1
	2 2
	3 3 3
*/
for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << i << " ";
		}
		cout << endl;
	}

// Pattern 5
/*
	* * * * * 
	* * * * 
	* * * 
	* * 
	* 
*/
for(int i = 0; i < n; i++){
      for(int j = 0; j < n - i; j++){
        cout << "* ";
      }
      cout << endl;
    }

// Pattern 6
/*
	1 2 3 4 5 
	1 2 3 4 
	1 2 3 
	1 2 
	1 
*/
for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n - i + 1; j++){
        cout << j << " ";
      }
      cout << endl;
    }

// Pattern 7
/*
	*    
   ***   
  *****  
 ******* 
*********
*/
for(int i = 0; i < n; i++){
        // space 
        for(int j = 0; j < n - i - 1; j++){
          cout << " ";
        }
        
        // star
        for(int j = 0; j < 2 * i + 1; j++){
          cout << "*";
        }
        
        // space
        for(int j = 0; j < n - i - 1; j++){
          cout << " ";
        }
        
        cout << endl;
    }

// pattern 8
/*
*********
 ******* 
  *****  
   ***   
    *   
*/
for(int i = 0; i < n; i++){
        // space 
        for(int j = 0; j < i; j++){
          cout << " ";
        }
        
        // star
        for(int j = 0; j < 2 * n - (2 * i + 1); j++){
            cout << "*";
        }
        
        // space
        for(int j = 0; j < i; j++){
          cout << " ";
        }
        
        cout << endl;
    }

// pattern 9
/*
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    
*/
for(int i = 0; i < n; i++){
        // space 
        for(int j = 0; j < n - i - 1; j++){
          cout << " ";
        }
        
        // star
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        
        // space
        for(int j = 0; j < n - i - 1; j++){
          cout << " ";
        }
        
        cout << endl;
    }
    
    
    for(int i = 0; i < n; i++){
        // space 
        for(int j = 0; j < i; j++){
          cout << " ";
        }
        
        // star
        for(int j = 0; j < 2 * n - (2 * i + 1); j++){
            cout << "*";
        }
        
        // space
        for(int j = 0; j < i; j++){
          cout << " ";
        }
        
        cout << endl;
    }

// pattern 10
/*
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/
for(int i = 0; i < n; i++){
          for(int j = 0; j < i; j++){
            cout << "*";
          }
        cout << endl;
        }
        
        for(int i = 0; i < n; i++){
          for(int j = 0; j < n - i; j++){
            cout << "*";
          }
        cout << endl;
        }x
return 0;
}