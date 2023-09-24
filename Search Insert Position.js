/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
  if (nums.includes(target)) {
    return nums.indexOf(target);
  }
  if (nums[nums.length - 1] < target) {
    return nums.length;
  }
  if (nums[0] > target) {
    return 0;
  }
  for (let i = 0; i < nums.length; i++) {
    const element = nums[i];
    const nextEl = nums[i + 1];
    if (element < target && nextEl > target) {
      return i + 1;
    }
  }
};
