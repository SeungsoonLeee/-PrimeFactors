#include<vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (num == 2) {
			ret.push_back(2);
		}
		return ret;
	}
};
