#include <iostream>
#include <set>
using namespace std;
class Different {
public:
    bool checkDifferent(string iniString) {
        // write code here
		set<char> s;
		for(int i=0;i<iniString.size();i++){
			if(s.count(iniString[i]))
				return false;
			else{
				s.insert(iniString[i]);
			}
		}
		return true;
    }
};