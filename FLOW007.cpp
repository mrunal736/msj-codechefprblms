#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    int res = 0;
	    cin>>N;
	    while(N!=0){
	    int rem=N%10;
	    res = res*10 + rem;
	    N=N/10;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
