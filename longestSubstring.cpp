#include <iostream>
#include <string>

using namespace std;

int main(){
	
	// variables
	string s = "abcabcbb";
	int count = 0;
	
	// this for loop recurse over the string the first time
	for (int i = 0; i < s.size(); i++){
		
		// variables that need to be re-initialized each time
		char c = s[i];
		int temp = 1;

		// this for loop recurse over the string the second time
		for (int j = 0; j < s.size(); j++){
	
			// check if character s of j is not equal to s of i
			if (s[j] != s[i]){
				
				temp++;		// if so increment temp
			} else {
				
				// check if temp is greater than count for longest substring
				if (temp > count){
					
					count = temp;		// if so make count equal to temp
				}
				
				// exit loop
				break;
			}
		
		}
	}

	// display longest found substring size
	cout << count;
	
	return 0;
}