/**
 * @param {number} millis
 */
async function sleep(millis) {
   
    let t = Date.now();
    let x = millis + t;
    
    while(Date.now() < x)
    {

    }
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */