#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    string s;
	    cin>>s;
	    int a=0;
	    for (int i = 0; i < s.size(); i++) {
	       if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='R'||s[i]=='Q')
	       a++;
	       else if(s[i]=='B')
	       a+=2;
	    }
	    std::cout << a << std::endl;
	}
	return 0;
}
