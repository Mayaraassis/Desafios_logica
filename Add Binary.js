var addBinary = function(a, b) {
    let l1 = a.length;
    let l2 = b.length;
    if (a.length > b.length) {
        let diff = a.length - b.length;
        for (let i = 0; i < diff; i++) {
            b = "0" + b;
        }
    }
    if (a.length < b.length) {
        let diff = b.length - a.length;
        for (let i = 0; i < diff; i++) {
            a = "0" + a;
        }
    }
    let carry = 0;
    let ans = "";
    for (let i = a.length - 1; i >= 0; i--) {
        if (a[i] === '0' && b[i] === '0' && carry === 0) {
            ans = "0" + ans;
        } else if (a[i] === '0' && b[i] === '0' && carry === 1) {
            ans = "1" + ans;
            carry = 0;
        } else if (a[i] === '0' && b[i] === '1' && carry === 1) {
            ans = "0" + ans;
            carry = 1;
        } else if (a[i] === '1' && b[i] === '0' && carry === 1) {
            ans = "0" + ans;
            carry = 1;
        } else if (a[i] === '1' && b[i] === '0' && carry === 0) {
            ans = "1" + ans;
            carry = 0;
        } else if (a[i] === '1' && b[i] === '1' && carry === 1) {
            ans = "1" + ans;
            carry = 1;
        } else if (a[i] === '1' && b[i] === '1' && carry === 0) {
            ans = "0" + ans;
            carry = 1;
        } else if (a[i] === '0' && b[i] === '1' && carry === 0) {
            ans = "1" + ans;
            carry = 0;
        }
    }
    if (carry === 1) {
        ans = "1" + ans;
    }
    return ans; 
};
