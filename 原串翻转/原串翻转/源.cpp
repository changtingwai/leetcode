#include <iostream>
using namespace std;
class Reverse {
public:
    string reverseString(string iniString) {
        // write code here
		int i=0;
		int j=iniString.size()-1;
		char tmp;
		while(i<j){
			tmp=iniString[i];
			iniString[i]=iniString[j];
			iniString[j]=tmp;
			i++;
			j--;
		}
		return iniString;

    }
};