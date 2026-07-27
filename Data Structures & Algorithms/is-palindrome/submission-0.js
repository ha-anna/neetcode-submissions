class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {
        let s1 = s.replace(/[^a-zA-Z0-9]/g, "").toLowerCase();
        let s2 = s1.split('').reverse().join('');

        return s1 === s2;
    }
}
