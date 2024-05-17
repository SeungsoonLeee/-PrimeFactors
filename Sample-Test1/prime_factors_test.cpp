#include "pch.h"
#include "../PrimeFactorTDD/prime_factors.cpp"
#include<vector>
using namespace std;

class PrimeFixture : public testing::Test {
public:
	PrimeFactor pf;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, pf.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}
