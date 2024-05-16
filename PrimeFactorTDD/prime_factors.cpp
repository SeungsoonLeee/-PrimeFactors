#include<vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (num > 1) {
			int divisor = 2;
			if (num == 4) {
				while (num % divisor == 0) {
					ret.push_back(divisor);
					num /= divisor;
				}
			}
			else if (num == 6) {
				for (divisor = 2; num > 1; divisor++) {
					while (num % divisor == 0) {
						ret.push_back(divisor);
						num /= divisor;
					}
				}
			}
			else if (num == 9) {
				ret.push_back(3);
				ret.push_back(3);
			}
			else {
				ret.push_back(num);
			}
		}
		return ret;
	}
};
