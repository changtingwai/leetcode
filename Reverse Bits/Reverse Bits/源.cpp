#include <iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
		int i=32;
		while(i--)
		{
			res=res*2+(n&0x1);
			n>>1;
		}
		return res;
    }
};
int main()
{
	system("pause");
	return 0;
}