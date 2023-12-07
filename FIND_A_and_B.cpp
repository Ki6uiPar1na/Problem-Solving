#include <iostream>
using namespace std;

int product(int a,int b){
    int s=a*b;
    return s;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        //cout<<product(a,b)<<endl;
        if(product(a,b)%c==0) cout<<product(a,b)<<" "<<c<<endl;
        else if(product(a,c)%b==0) cout<<product(a,c)<<" "<<b<<endl;
        else if(product(b,c)%a==0) cout<<product(b,c)<<" "<<a<<endl;
        else cout<<"-1"<<endl;
        
    }
	// your code goes here
	return 0;
}
