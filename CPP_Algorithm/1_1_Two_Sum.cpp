#include <iostream>
#include <vector>

using namespace std;

/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

https://leetcode.com/problems/two-sum/

*/

class Solution {
public:
	vector<int> twoSum(vector<int> &, int);
};

vector<int> Solution::twoSum(vector<int> & nums, int target) {
	vector<int> result(2);
	int num_1, num_2;
	for (int i = 0; i < nums.size(); i++) {
		num_1 = nums[i];
		num_2 = target - num_1;
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[j] == num_2) {
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	return result;
}

int main() {
	;
}