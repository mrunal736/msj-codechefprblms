#include <iostream>
using namespace std;
#Starters7(july 2021)
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b;
	    cin>>a>>b;
	    int res = a + b;
	    if(res<3){
	        cout<<"1\n";
	    }
	    else if(res>=3 && res<=10){
	        cout<<"2\n";
	    }
	    else if(res>=11 && res<=60){
	        cout<<"3\n";
	    }
	    else if(res>60){
	        cout<<"4\n";
	    }
	}
	return 0;
}
