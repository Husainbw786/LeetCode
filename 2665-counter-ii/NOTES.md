var createCounter = function(init) {
var x=init;
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
return x=init;
}
return {increment,decrement,reset};
};
​