#include <bits/stdc++.h>
using namespace std;

// int lcs(string a , string b){

// 	int l1 = a.length();
// 	int l2 = b.length();

// 	if(l1==0 || l2==0){
// 		return 0;
// 	}
// 	else{

// 		if(a[l1-1]==b[l2-1])
// 			return 1+lcs(a.substr(0,l1-1),b.substr(0,l2-1));
// 		else 
// 			return max(lcs(a.substr(0,l1-1),b),lcs(a,b.substr(0,l2-1)));

// 	}

// }

int dplcs(string a , string b){

	int l1 = a.length();
	int l2 = b.length();
	int i, j;
	int dp[l1+1][l2+1]; 

	//dp[0][0] = 0;

	for(i=0 ; i<=l1 ; i++){

		for(j=0 ; j<=l2 ; j++){

			if(i==0 || j==0){
				dp[i][j]=0;
			}

			else if(a[i-1]==b[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else{
				dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			}

		}
	}

	return dp[l1][l2];
	
}

int main(){

	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);

	//cout << lcs(s1,s2) << endl;
	cout << dplcs(s1,s2);
	return 0;

}