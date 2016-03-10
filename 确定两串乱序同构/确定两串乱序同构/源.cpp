#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Same {
public:
    bool checkSam(string stringA, string stringB) {
        // write code here
		sort(stringA.begin(),stringA.end());
		sort(stringB.begin(),stringB.end());
		if(stringA==stringB)
			return true;
		else
			return false;
    }
};