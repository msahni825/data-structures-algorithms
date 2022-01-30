/**
 * @param {string[]} arr
 * @param {number} k
 * @return {string}
 */
var kthDistinct = function(arr, k) {
    const map = {};
    const distinctStr = [];

    arr.forEach(letter => map[letter] = map[letter] + 1 || 1);

    for(let [key, val] of Object.entries(map))
        if(val == 1)
            distinctStr.push(key);

    return distinctStr[k-1] || "";
};
