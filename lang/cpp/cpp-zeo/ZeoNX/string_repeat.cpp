#include <bits/stdc++.h>
using namespace std;

string getString(string s, long long k)
{
	vector<int> farray(26, 0);
	for (int i = 0;	i < s.length(); i++) farray[s[i] - 'a']++;
	string ans = "";

	for (int i = 25; i >= 0;) {
		if (farray[i] > k) {
			int temp = k;
			string st(1, i + 'a');
			while (temp > 0) {
				ans += st;
				temp--;
			}
			farray[i] -= k;
			int j = i - 1;
			while (farray[j]
					<= 0
				&& j >= 0) {
				j--;
			}
			if (farray[j] > 0
				&& j >= 0) {
				string str(1, j + 'a');
				ans += str;
				farray[j] -= 1;
			}
			else {
				break;
			}
		}
		else if (farray[i] > 0) {
			int temp = farray[i];
			farray[i] -= temp;
			string st(1, i + 'a');
			while (temp > 0) {
				ans += st;
				temp--;
			}
		}
		else {
			i--;
		}
	}
	return ans;
}

int main()
{
	int n, k; cin>>n>>k;
	string str; cin>>str;
	cout << getString(str, k)<< endl;
	return 0;
}

