/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    
    let x = [];
    let idx = 0;
    while(idx < arr.length)
        {
            x.push(arr.slice(idx,idx+size));
            idx = idx + size;
        }
    return x;
    
};
