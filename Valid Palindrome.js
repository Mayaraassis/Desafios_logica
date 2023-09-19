/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
     const regex = /[^A-Za-z0-9]/g;
        const lowerW = s.toLowerCase().replace(regex, "");
        const reverseW = lowerW.split("").reverse().join("");
        return reverseW === lowerW;
};
