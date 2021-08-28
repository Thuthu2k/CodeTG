#include <bits/stdc++.h>

using namespace std;

vector<int> digits(string s){
    vector<int> ans = {1};
    int count = 0;
    for (int i=0 ; i<s.length() ; i++){
        if (s[i] == 'I'){
            count = 0;
            int k = ans.size();
            ans.push_back(k + 1);
        }
        else{
            count ++;
            int tmp = ans.back();
            for (int j = (int)ans.size() - 1; j > (int)ans.size() - 1 - count; j--){
                ans[j] += 1;
            }
            ans.push_back(tmp);
        }
    }
   return ans; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	vector<int> ans = digits(s);
    	for (int i = 0; i < ans.size(); i++){
      	  cout << ans[i];
   		}
   	 	cout << endl;
	}
    return 0;
}