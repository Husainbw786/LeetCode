/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    
    let x = init;
    function increment()
    {
        return ++x;
    }
    function decrement()
    {
        return --x;
    }
    function reset()
    {
        return x = init;
    }
    return {increment,decrement,reset};

    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */