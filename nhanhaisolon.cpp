#include <bits/stdc++.h>

using namespace std;
// phép nhân 2 chữ số
string nhanlonnho(string bignumber,string smallnumber)
{
	string kq;
	int k=bignumber.length()-1;
	int intermediate=0;
	for(int i=k;i>=0;i--)
	{
		int t=(int(bignumber[i])-48)*stoi(smallnumber)+intermediate;
		int donvi=t%10;
		intermediate=t/10;
		kq=to_string(donvi)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
string conghaiso(string s1,string s2)
{
	while(s1.length()<s2.length())
		s1="0"+s1;
	while(s2.length()<s1.length())
		s2="0"+s2;
	int intermediate=0;
	string kq;
	for(int i=s1.length()-1;i>=0;i--)
	{
		int t=int(s1[i])-48+int(s2[i])-48+intermediate;
		intermediate=t/10;
		kq=to_string(t%10)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
string nhanhaisolon(string s1,string s2)
{
	string inter="";
	string kq="";
	for(int i=s2.length()-1;i>=0;i--)
	{
		string s;
		s.append(1,s2[i]);
		string tich=nhanlonnho(s1,s)+inter;
		inter=inter+"0";
		kq=conghaiso(kq,tich);
	}
	return kq;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<nhanhaisolon(s1,s2);
	//cout<<conghaiso("11233","457");
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
// phép nhân 2 chữ số
string nhanlonnho(string bignumber,string smallnumber)
{
	string kq;
	int k=bignumber.length()-1;
	int intermediate=0;
	for(int i=k;i>=0;i--)
	{
		int t=(int(bignumber[i])-48)*stoi(smallnumber)+intermediate;
		int donvi=t%10;
		intermediate=t/10;
		kq=to_string(donvi)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
string conghaiso(string s1,string s2)
{
	while(s1.length()<s2.length())
		s1="0"+s1;
	while(s2.length()<s1.length())
		s2="0"+s2;
	int intermediate=0;
	string kq;
	for(int i=s1.length()-1;i>=0;i--)
	{
		int t=int(s1[i])-48+int(s2[i])-48+intermediate;
		intermediate=t/10;
		kq=to_string(t%10)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
string nhanhaisolon(string s1,string s2)
{
	string inter="";
	string kq="";
	for(int i=s2.length()-1;i>=0;i--)
	{
		string s;
		s.append(1,s2[i]);
		string tich=nhanlonnho(s1,s)+inter;
		inter=inter+"0";
		kq=conghaiso(kq,tich);
	}
	return kq;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<nhanhaisolon(s1,s2);
	//cout<<conghaiso("11233","457");
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
// phép nhân 2 chữ số
string nhanlonnho(string bignumber,string smallnumber)
{
	string kq;
	int k=bignumber.length()-1;
	int intermediate=0;
	for(int i=k;i>=0;i--)
	{
		int t=(int(bignumber[i])-48)*stoi(smallnumber)+intermediate;
		int donvi=t%10;
		intermediate=t/10;
		kq=to_string(donvi)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
string conghaiso(string s1,string s2)
{
	while(s1.length()<s2.length())
		s1="0"+s1;
	while(s2.length()<s1.length())
		s2="0"+s2;
	int intermediate=0;
	string kq;
	for(int i=s1.length()-1;i>=0;i--)
	{
		int t=int(s1[i])-48+int(s2[i])-48+intermediate;
		intermediate=t/10;
		kq=to_string(t%10)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
string nhanhaisolon(string s1,string s2)
{
	string inter="";
	string kq="";
	for(int i=s2.length()-1;i>=0;i--)
	{
		string s;
		s.append(1,s2[i]);
		string tich=nhanlonnho(s1,s)+inter;
		inter=inter+"0";
		kq=conghaiso(kq,tich);
	}
	return kq;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<nhanhaisolon(s1,s2);
    return 0;
}
