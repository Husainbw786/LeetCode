/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    
    var x = init;
    for(let i=0;i<nums.length;i++)
    {
       x = fn(x,nums[i]);
    }
    
    return x;
    
};