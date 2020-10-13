#include<iostream>
#include<string>

using namespace std;

int main ()
{
	int ln,a,b;
	string st;
	cin>>a;
	for(b=1;b<=a;b++)
	{
		cin>>st;
		ln = st.length();
		if (ln<=10)
		{
			cout<<st<<endl;
		}
		else
		{
			cout<<st[0]<<ln-2<<st[ln-1]<<endl;
		}
		}
}
