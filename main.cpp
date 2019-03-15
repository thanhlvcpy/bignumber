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
void giam(string& s)
{
    string s1=s;
    string s2="1";
    while(s2.length()<s1.length());
        s2=" "+s2;


}
int main(){
    string giaithua;
	string str ,test= "1";
	cin>>giaithua;
	while(int(giaithua[0])>48)
	{
	    nhan(str,giaithua,test);
	    test=str;
	    str="";
	    giam(giaithua);
	}
	return 0;
}
