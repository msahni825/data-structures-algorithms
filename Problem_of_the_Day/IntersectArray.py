class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans  = []
        i=0
        j=0
        
        nums1.sort()
        nums2.sort()
        
        n1=len(nums1)
        n2=len(nums2)
        
        while i<n1 and j<n2:
            if nums1[i]>nums2[j]:
                j=j+1
            elif nums1[i]<nums2[j]:
                i=i+1
            else:
                ans.append(nums1[i])
                i=i+1
                j=j+1
        return ans
                
