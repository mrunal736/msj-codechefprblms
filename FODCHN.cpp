#include <bits/stdc++.h>
using namespace std;
#STARTERS7(july 2021)
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int e,k,count=0;
	    cin>>e>>k;
	    while(e!=0){
	        e=floor(e/k);
	        count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
