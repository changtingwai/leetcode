#include <iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) 
			return false;
		if(n==1)
			return true;
		while(n>2&&n%2==0)
			n/=2;
		if(n%2==0)
			return true;
		else return false;

    }
};
int main()
{
	Solution s;
	int n=2;
	cout<<(n%2)<<endl;
	cout<<s.isPowerOfTwo(2);
	system("pause");
	return 0;
}