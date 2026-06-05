#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int L = s.length();
    
    // Outer loop: Count from 1 up to (2^L) - 1
    for(int ctr = 1; ctr < (1 << L); ctr++) {
        
        string combi = "";
        
        // Inner loop: Check every possible letter position
        for(int sh = 0; sh < L; sh++) {
            
            // Check if the 'sh' switch is currently flipped ON inside our counter
            if((ctr & (1 << sh)) > 0) {
                combi += s[sh]; // If ON, add the letter to our combination
            }
        }
        
        cout << combi << endl; // Print the generated combination
    }
}

int main() {
    solve();
    return 0;
}