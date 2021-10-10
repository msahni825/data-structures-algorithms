class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # answer = nums[0]
        # print(answer)
        # n = len(nums)
        sum_of_nums = sum(nums)
        print(sum_of_nums)
        sum_set_of_nums = sum(set(nums)) * 2
        print(sum_set_of_nums)
        # for i in nums:
        #     answer = answer ^ i
        #     print(answer)
        return sum_set_of_nums-sum_of_nums
