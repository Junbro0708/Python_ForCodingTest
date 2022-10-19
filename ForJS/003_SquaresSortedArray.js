/*
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    let array = new Array();
    for(let num of nums){
      array.push(Number(num * num));
    }
    return array.sort(function(comp1, comp2){
      return comp1 - comp2;
    });
};