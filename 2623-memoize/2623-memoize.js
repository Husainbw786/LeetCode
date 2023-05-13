/**
 * @param {Function} fn
 */
function memoize(fn) {
    const dictionary = {};
    
    return function(...args) {
        
        const key = String(args);
        if(key in dictionary)
        {
            return dictionary[key];
        }
        const result = fn(...args);
        dictionary[key] = result;
        return result;
        
        
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */