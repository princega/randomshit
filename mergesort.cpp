#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& a, vector<int>& b){
	int ia = 0, ib = 0, i = 0;
	int x = a.size();
	int y = b.size();
	int n = x + y;
	vector<int> output(n);
	while(ia<x || ib<y){
		if(ia<x && ib<y){
			if(a[ia]<b[ib]){
				output[i] = a[ia];
				++ia;
			}else if(b[ib]<a[ia]){
				output[i] = b[ib];
				++ib;
			}
		}
		else if(ia<x){
			output[i]=a[ia];
			++ia;
		}
		else if(ib<y){
			output[i] = b[ib];
			++ib;
		}
		++i;
	}
	return output;
}

void perform(vector<vector<int>>& input, int len){
	int i = 0, a = 0, b = 1, n = len;
	while(input[0].size() != len){
		if(b<n){
			input[i] = merge(input[a], input[b]);
			a += 2;
			b += 2;
			++i;
		}else{
			n = i;
			i = 0;
			a = 0;
			b = 1;
		}
		if(len%2!=0 && b == n){
			input[n] = input[len-1];
		}
	}
	cout<<"Sorted Array is: ";
	for(i=0;i<len;i++){
		cout<<input[0][i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<vector<int>> arr;
	int len;
	cout<<"Enter the len of array: ";
	cin>>len;
	for(int i=0;i<len;i++){
		int temp;
		cin>>temp;
		vector<int> temparr;
		temparr.push_back(temp);
		arr.push_back(temparr);
	}
	perform(arr, len);
	return 0;
}