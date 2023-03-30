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
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        /* code */
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    int p=a[k-1];
	    sort(a,a+n);
	    int j;
	   for (int i = 0; i < n; i++) {
	       /* code */
	       if(a[i]==p)
	       j=i;
	   }
	   std::cout << j+1 << std::endl;
	}
	return 0;
}
