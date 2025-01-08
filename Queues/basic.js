class queue {
    constructor(){
        this.queue = []
    }

    enqueue(data){
        this.queue.push(data);
    }
    dequeue(){
        if(this.isEmpty()){
            return "Underflow"
        }
        return this.queue.shift();
    }

    peek(){
        if(this.isEmpty()){
            return "Underflow"
        }
        return this.front();
    }

    isEmpty(){
        return this.size() === 0;
    }

    size(){
        return this.queue.length;
    }
    print(){
        for(let i = 0; i < this.size(); i++ ){
            console.log(this.queue[i]);
        }
    }

    front(){
        if(this.isEmpty()){
            return "Underflow"
        }
        return this.queue[0];
    }
    rear(){
        if(this.isEmpty()){
            return "Underflow"
            }
        return this.queue[this.size()-1];
    }
}

const Queue = new queue()
Queue.enqueue(1);
Queue.enqueue(2);
Queue.enqueue(3);

console.log('size',Queue.size())

Queue.print();

console.log("dequeue:",Queue.dequeue());

Queue.print()

console.log("peek:",Queue.peek())
console.log(Queue.isEmpty())
console.log('size',Queue.size())
console.log('front',Queue.front())
console.log('rear',Queue.rear())

Queue.dequeue()
Queue.dequeue()
Queue.print()

console.log('size',Queue.size())
console.log('front',Queue.front())
console.log('rear',Queue.rear())
console.log("peek:",Queue.peek())
console.log(Queue.isEmpty())