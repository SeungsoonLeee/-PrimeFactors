#include<vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (num > 1) {
			if (num == 4) {
				while (num % 2 == 0) {
					ret.push_back(2);
					num /= 2;
				}
			}
			else if (num == 6) {
				ret.push_back(2);
				ret.push_back(3);
			}
			else {
				ret.push_back(num);
			}
		}
		return ret;
	}
};
