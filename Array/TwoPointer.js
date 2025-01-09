const twoPointer = (array, target) =>{
    for (let i = 0; i < array.length; i++) {
        for (let j = i+1; j < array.length; j++) {
           if((array[i] + array[j] === target)){
            return [array[i], array[j]];
           }
        }
        
    }
    return `There is no Pair for the given Target: ${target} in the array: ${array}`;
}

var arr = [10, 20, 35, 50]
var target =70
console.log(twoPointer(arr, target));
arr = [10, 20, 30]
console.log(twoPointer(arr, target))
arr = [-8, 1, 4, 6, 10, 45]
target = 16
console.log(twoPointer(arr, target))