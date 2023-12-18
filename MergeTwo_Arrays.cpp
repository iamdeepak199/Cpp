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
    int A[]={1,2,3,4,5};
    int B[]={10,20,30,40,50};

    int Al=sizeof(A)/sizeof(A[0]);
    int Bl=sizeof(B)/sizeof(B[0]);

    int Cl=Al+Bl;
    int C[Cl];

    for(int i=0;i<Al;i++){
        C[i]=A[i];
    }

    for(int i=0;i<Bl;i++){
        C[Al+i]=B[i];
    }

    for(int i=0;i<Cl;i++){
        cout<<C[i]<<" ";
    }
}