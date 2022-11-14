/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  if(x < 0){
    return false;
  }else{
    const num = String(x);
    for(let i = 0; i < num.length; i++){
      if(i == Math.floor(num.length / 2)) return true;
      if(num[i] != num[num.length - i - 1]) return false;
    }
  }
};
console.log(isPalindrome(121))