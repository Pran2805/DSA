const prefixSum = (array) =>{
    let number;
    let newArray = [];
    for (let i = 0; i < array.length; i++) {
        if(i == 0){
            number = array[i];
            newArray.push(number);
        }else{
            number += array[i];
            newArray.push(number);
        }
        
    }
    return newArray;
}

let arr = [10, 20, 10, 5, 15]
console.log(prefixSum(arr));