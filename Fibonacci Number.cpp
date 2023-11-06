class Solution {
public:
	int fib(int n) {
		if(n==0){return 0;}
		if(n==2 || n==1){return 1;}
		int prv1=1, prv2=1, ans;
		for(int i=2; i<n; i++){
			ans=prv1+prv2;
			prv1=prv2;
			prv2=ans;
		}
		return ans;
	}
};
