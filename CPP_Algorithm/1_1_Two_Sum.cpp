#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

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

// Method 1: do not use map
// Your runtime beats 34.18% of cpp submissions.
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

// Method 2: onoredered_map (one-pass)
// Your runtime beats 96.91% of cpp submissions.
vector<int> Solution::twoSum(vector<int> & nums, int target) {
	unordered_map<int, int> nums_map;
	for (int i = 0; i < nums.size(); i++) {
		nums_map[nums[i]] = i;
	}
	vector<int> result(2);
	int num1, num2;
	for (int i = 0; i < nums.size(); i++) {
		num1 = nums[i];
		num2 = target - num1;
		if (nums_map.find(num2) != nums_map.end() && nums_map.find(num2)->second != i) {
			result[0] = i;
			result[1] = nums_map.find(num2)->second;
			return result;
		}
	}
	return result;
}

// Method 3: map
// Your runtime beats 96.91% of cpp submissions.
vector<int> Solution::twoSum(vector<int> & nums, int target) {
	map<int, int> nums_map;
	for (int i = 0; i < nums.size(); i++) {
		nums_map[nums[i]] = i;
	}
	vector<int> result(2);
	int num1, num2;
	for (int i = 0; i < nums.size(); i++) {
		num1 = nums[i];
		num2 = target - num1;
		if (nums_map.find(num2) != nums_map.end() && nums_map.find(num2)->second != i) {
			result[0] = i;
			result[1] = nums_map.find(num2)->second;
			return result;
		}
	}
	return result;
}

// Method 4: map (two-pass)
// Your runtime beats 96.91% of cpp submissions.
vector<int> Solution::twoSum(vector<int> & nums, int target) {
	map<int, int> nums_map;
	vector<int> result(2);
	int num1, num2;
	for (int i = 0; i < nums.size(); i++) {
		num1 = nums[i];
		num2 = target - num1;
		if (nums_map.find(num2) != nums_map.end()) {
			result[0] = nums_map.find(num2)->second;
			result[1] = i;
			return result;
		}
		nums_map[nums[i]] = i;
	}

}