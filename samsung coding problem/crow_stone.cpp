//https://www.careercup.com/question?id=5166688897073152
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,i,j,x,y,ans=0,k;
	cin>>n>>k;
	int a[n+3];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<k;i++){
		ans+=a[i];
      for(j=i+1;j<n;j++) {
      	a[j]-=a[i];
      	ans+=a[i];
      }
	}
   cout<<ans<<endl;
}