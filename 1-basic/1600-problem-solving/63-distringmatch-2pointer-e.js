

/**
 * 
 * @param {string} S 
 * @returns {number[]}
 */
const distringMatch = (S) => {
    let num = [];
    let inc = 0; 
    let dec = S.length;
    let i = 0;
    while(num.length !== S.length + 1) {
        num[i] = S[i] === 'D' ? dec--: inc++;
        i++;
    }
    return num;
};

s = "IDID"
out = [0,4,1,3,4]