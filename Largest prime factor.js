function largestPrimeFactor(number) {
  let factor = 1;
  
  for (let i = 2; i <= number/2; i++) {
    if (number % i === 0) {
      let division = number / i;
      let itsPrime = true;
      
      for (let j = 2; j <= division/2; j++) {
        if (division % j === 0) {
          itsPrime = false;
          break;
        }
      }
      
      if (itsPrime) {
        factor = division;
        break;
      }
    }
  }
  
  if (factor === 1) {
    factor = number;
  }
  
  return factor;
}
largestPrimeFactor(13195);
