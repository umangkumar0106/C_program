#include <iostream> 

using namespace std; 

 

// Function to print pattern 

void ReverseCharBridge(int n) 

{ 

for (int i = 0; i < n; i++) 

{ 

for (int j = 'A'; j < 'A' + (2 * n) - 1; j++) 

{ 

if (j >= ('A' + n - 1) + i) 

cout << (char)(('A' + n - 1) - 

(j % ('A' + n - 1))); 

else if (j <= ('A' + n - 1) - i) 

cout << (char)j; 

else 

cout << " "; 

} 

cout << endl; 

} 

} 

 

// Driver Code 

int main() 

{ 

int n = 6; 

ReverseCharBridge(n); 

return 0; 

} 