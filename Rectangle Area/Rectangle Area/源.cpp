#include <iostream>
#include <stdlib.h>

using namespace std;
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area=(C-A)*(D-B)+(G-E)*(H-F);
		if(A>=G||E>=C||B>=H||F>=D)
			return area;
		int top=min(D,H);
		int buttom=max(B,F);
		int left=max(A,E);
		int right=min(C,G);
		return area-(top-buttom)*(right-left);
    }
};
int main()
{
	system("pause");
	return 0;
}