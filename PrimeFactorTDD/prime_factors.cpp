#include<vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (num > 1) {
			if (num == 4) {
				ret.push_back(2);
				ret.push_back(2);
			}
			else {
				ret.push_back(num);
			}
		}
		return ret;
	}
};
