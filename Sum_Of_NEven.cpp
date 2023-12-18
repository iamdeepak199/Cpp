#include<iostream>
using namespace std;

void fastio(bool read = false) {
	if(read) {
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		freopen("error.txt","w",stderr);
		#endif
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return;
}

int main(){
    fastio(true);
    int n,sum=0;
    cout<<"Enter the number to find it's even sum"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+2*i;

    }
    cout<<"Sum of N even no is : "<<sum;
}