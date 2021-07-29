#include <iostream>
using namespace std;
#july cookoff 2021
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a==0&&b==1)||(a==0&&c==1)||(b==0&&c==1)||(a==1&&b==0)||(a==1&&c==0)||(b==1&&c==0)){
	        cout<<"1\n";
	    }
	    else{
	        cout<<"0\n";
	    }
	}
	return 0;
}
