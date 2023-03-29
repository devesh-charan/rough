/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
  for (int i = 0; i < n; i++) {
      cin>>a[i];
  }
  const int N= 1e6+2;//it is 10^6 
  int ind[N];
  for (int i = 0; i < N; i++) {
     ind[i] =-1;
  }
  int maxind = -100000;
  for (int i = 0; i < n; i++) {
      if(ind[a[i]]!=-1){
          maxind= min(ind[a[i]],maxind);
      }
      else{
          ind[a[i]]==i;
      }
  }
  if(maxind==-100000)
  std::cout << -1 << std::endl;
  else
  cout<<maxind+1<<endl;

    return 0;
}
