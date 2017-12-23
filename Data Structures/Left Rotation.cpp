#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 100002
#define ll long long
ll n,d,p;
ll v[MAXN];
ll aux[MAXN];
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n>>d;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		d%=n;
		for(int i=d;i<n;i++){
			aux[p++]=v[i];
		}
		for(int i=0;i<d;i++){
			aux[p++]=v[i];
		}
		for(int i=0;i<n;i++){
			v[i]=aux[i];
			cout << v[i]<<" ";
		}
		cout << "\n";
	}