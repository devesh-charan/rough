#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i]>>b[i];
	    }
	    int sum=0;
	    for (int i = 0; i < 9; i++) {
	        int m=0;
	        for (int j = 0;j < n;j++) {
	            if(i==a[j]){
	                m=max(m,b[j]);
	            }
	        }
	        sum+=m;
	    }
	std::cout << sum << std::endl;
	    
	}
	return 0;
}
