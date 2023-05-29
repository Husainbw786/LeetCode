/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    
     if(obj == null || obj === undefined || typeof classFunction !== 'function')
     {
         return false;
     }
     
    const input_object = Object(obj);
    
    if(input_object instanceof classFunction)
    {
        return true;
    }
    else
    {
        return false;
    }
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */