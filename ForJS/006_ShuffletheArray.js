/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
  let arrs = [];
  for(let i = 0; i < n; i++){
    arrs.push(nums[i]);
    arrs.push(nums[i+n]);
  }
  return arrs;
};
console.log(shuffle([2,5,1,3,4,7], 3));