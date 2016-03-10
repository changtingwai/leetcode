#include <iostream>
#include <string>
using namespace std;
class Replacement {
public:
    string replaceSpace(string iniString, int length) {
        // write code here
		string res;
		for(int i=0;i<length;i++){
			if(iniString[i]!=' ')
				res+=iniString[i];
			else{
				res+='%';
				res+=to_string(2);
				res+=to_string(0);
			}
		}
		return res;
    }
};