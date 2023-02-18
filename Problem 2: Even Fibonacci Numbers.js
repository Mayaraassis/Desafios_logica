function fiboEvenSum(n) {
    const acc = []
    let i = 1;
    let j = 1;
    let aux = 0;
    let divTwo = 0
    while(aux <= n){
        if(i <= 2) {
            aux = i
            acc.push(aux)
            i++
        } else {
            aux = acc[j] + acc[j - 1]
            if(aux<=n){
                acc.push(aux)
                j++
            }
            else{
                break;
            }
        }
    }
    for(let i = 0; i < acc.length; i++){
        if(acc[i] % 2 === 0){
            divTwo += acc[i]
        }
    }
    return divTwo
}

fiboEvenSum(1000)
