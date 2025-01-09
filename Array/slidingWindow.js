const slidingWindow = (windowSize, array) =>{
    let max_sum = Number.MIN_SAFE_INTEGER;
    for (let i = 0; i < (array.length - windowSize + 1); i++) {
        let current_sum = 0;
        for (let j = 0; j < windowSize; j++) {
            current_sum += array[i + j];
            }
            max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}
const max = (num1, num2) => {
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

var arr = [1, 4, 2, 10, 2, 3, 1, 0, 20];
var windowSize = 4;
console.log(slidingWindow(windowSize, arr));
arr = [100, 200, 300, 400]
windowSize = 2

console.log(slidingWindow(windowSize, arr));