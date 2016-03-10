#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	
	void countCharNum(string str,char target)
	{
	int count=0;
	int num=str.size();
	for(int i=0;i<num;i++)
	{
		if(str[i]>'A'&&str[i]<'Z')
		{
			str[i]=str[i]-'A'+'a';
		}
		if(str[i]==target)
			count++;
		}
		cout<<count<<endl;
	}
};
int main()
{
	Solution s;
	string str;
	char num;
	char tmp;
	cin.getline(str,' ');
	while(1)
	{
		cin>>tmp;
		if(tmp!='32')
			str.push_back(tmp);
		else
			break;
	}


	s.countCharNum(str,num);
	return 0;
}