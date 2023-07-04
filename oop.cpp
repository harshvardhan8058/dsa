#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    ll n; cin>>n;
	    ll a[n],b[n],s=0,s1=0,x=0,x1=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        s+=a[i];
	        x^=a[i];
	    }
	     for(int i=0; i<n; i++){
	        cin>>b[i];
	        s1+=b[i];
	        x1^=b[i];
	    }
	    s==s1 && x==x1? cout<<1<<endl : cout<<0<<endl;
	}
	return 0;
}