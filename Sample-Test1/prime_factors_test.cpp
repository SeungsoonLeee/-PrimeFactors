#include "pch.h"
#include "../PrimeFactorTDD/prime_factors.cpp"
#include<vector>
using namespace std;

TEST(PrimeFactors, PrimTest) {
	PrimeFactor pf;
	vector<int> expected = {};

	EXPECT_EQ(expected, pf.of(1));
}