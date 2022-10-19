/*
 * @param {number[]} nums
 * @return {number}
 */

let nums = [1, 1, 0, 1, 1, 1];

var findMaxConsecutiveOnes = function(nums) {
  let sum = 0, max = 0;
  for(let i in nums){
    if(nums[i] != 1){
      if(max < sum) max = sum;
      sum = 0;
    }else sum++;
  }
  if(max < sum) max = sum;
  return max;
};