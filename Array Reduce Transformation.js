/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let out = init;
    for (const num of nums) {
        out = fn(out, num);
    }
    return out;
};
