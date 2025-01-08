// LIFO 
class stack{
    constructor(){
        this.stack = [];
    }

    push(data){
        this.stack.push(data);
    }
    peek(){
        return this.stack[this.size()-1]
    }
    pop(){
        if(this.isEmpty()){
            return 'stack is empty';
        }
        return this.stack.pop();
    }
    isEmpty(){
        if(this.size() == 0){
            return true;
        }
        return false;
    }
    size(){
        return this.stack.length;
    }
    print(){
        for(let i=0; i<this.size(); i++){
            console.log(this.stack[i]);
        }
    }
}

const Stack = new stack();
Stack.push(1);
// console.dir(Stack, {
//     depth: 1000000000000000000000000000000000
// })
console.log(Stack.isEmpty());

console.log(Stack.pop())
console.log(Stack.isEmpty())
console.log(Stack.pop())
// console.dir(Stack, {
//     depth: 1000000000000000000000000000000000
// })

Stack.push(1);
Stack.push(2);
Stack.push(3);
Stack.push(2);
Stack.push(3);
Stack.push(2);
Stack.push(3);
Stack.push(2);
Stack.push(3);
Stack.push(5);
Stack.push(54739);

console.log(Stack.peek())
console.log(Stack.size())
Stack.print()