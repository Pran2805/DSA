// initializing the array
let fruits = ['apple', 'orange', 'banana', 'grape'];

console.log(fruits)

//setting new element value
// fruits[2] = 'coconut'


fruits.push('coconut')
console.log(fruits)

fruits.push('mango')
console.log(fruits)

fruits.pop()
console.log(fruits)

fruits.unshift('kiwi')
console.log(fruits, fruits.length);

fruits.shift()
console.log(fruits)

fruits.sort()
console.log(fruits)

console.log(fruits.indexOf('grape'))


// we can also use fruits.sort().reverse(s)
fruits.reverse()
console.log(fruits)
