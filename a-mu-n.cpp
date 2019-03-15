#include <bits/stdc++.h>
using namespace std;
void nhan(string &str, string str1, string str2 ){
	int *res;
	res = new int[str1.size() + str2.size()];
	for(int i = 0; i<= str1.size() + str2.size(); i++) res[i] = 0;

	for( int i = str1.size() - 1; i >= 0; i-- ){
		for( int j = str2.size() - 1; j >= 0; j-- )
			res[i+1+j] += ( str1[i] - '0' ) * ( str2[j] - '0' );
	}

	for(int i = str1.size() + str2.size(); i>= 0 ; i-- )
		if(res[i] > 9){
			res[i-1] += res[i]/10;
			res[i] %= 10;
		}
	for( int i = 0; i< str1.size() + str2.size(); i++ )
		str+= (res[i] + '0');
    if(str[0]=='0')
        str.erase(0,1);
}
int main(){
    string a;
    int n;
	string str ,test= "1";
	cin>>a>>n;
	for(int i=1;i<=n;i++)
	{
	    nhan(str,test,a);
	    test=str;
	    str="";
	}
	cout<<test<<endl;
	return 0;
}
