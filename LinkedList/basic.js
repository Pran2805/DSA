class Node {
    constructor(data) {
        this.data = this.data;
        this.next = null; // initializing next as null
    }
}


class linkedList {
    constructor() {
        this.head = null;
    }

    addFirst(data) {
        let newNode = new Node();
        newNode.data = data;

        newNode.next = this.head;
        this.head = newNode;
    }

    addLast(data) {
        let newNode = new Node();
        newNode.data = data;

        if (!this.head) {
            this.head = newNode;
            return;
        }

        let current = this.head;
        while (current.next) {
            current = current.next;
        }
        current.next = newNode;
    }

    size() {
        let current = this.head;
        let count = 0;
        while (current.next) {
            current = current.next;
            count++;
        }
        return count;

    }
    addAt(index, data) {
        if (index < 0 || index > this.size()) {
            console.error('Invalid index')
            return "Invalid index";
        }

        const newNode = new Node()
        newNode.data = data;
        let current = this.head;

        for (let i = 0; i < index - 1; i++) {
            current = current.next;
        }

        newNode.next = current.next;
        current.next = newNode;
    }

    removeTop() {
        if (!this.head) {
            return "The Linked list is not been initialized yet !";
        }
        this.head = this.head.next;
    }

    removeEnd() {
        if (!this.head) {
            return "The linked list is not been initialized been yet!";
        }

        let current = this.head;

        for (let i = 0; i < this.size() - 1; i++) {
            current = current.next;
        }
        current.next = null;
    }

    print() {
        if (!this.head) {
            return "Linked List is not been initialized yet";
        }

        if (!this.head.next) {
            console.log(this.head)
        }

        let current = this.head;
        while (current) {
            console.log(current.data);
            current = current.next;
        }
    }

    removeAt(index) {
        
        if (index < 0 || index >= this.size()) {
            return "invalid index";
        }

        if (index === 1) {
            this.head = this.head.next;
            return;
        }
        


        let current = this.head;
        let previous = current;
        for (let i = 0; i < index - 1; i++) {
            previous = current;
            current = current.next;
        }
        previous.next = current.next;
        current = null;
    }

}

const LinkedLists = new linkedList();
LinkedLists.addFirst(4)
LinkedLists.addFirst(3)
LinkedLists.addFirst(2)
LinkedLists.addFirst(1)


// LinkedLists.print()

LinkedLists.addLast(5)
// LinkedLists.print()

LinkedLists.addAt(2, 2.5)
// LinkedLists.print()

// console.log(LinkedLists.size())

// console.dir(LinkedLists, {
//     depth: 1000000000000000000
// })




// removing element from linked list

// LinkedLists.removeTop()
// // LinkedLists.print()
// LinkedLists.removeEnd()
// LinkedLists.print()

// LinkedLists.print()

LinkedLists.removeAt(3)
LinkedLists.print()