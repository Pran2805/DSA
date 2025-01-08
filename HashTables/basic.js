
// we are not handling collision yet !!
class hashTable{
    constructor(size){
        this.table = new Array(size);
        this.size = size;
    }

    hash(key){
        let total = 0;
        for (let i = 0; i<key.length; i++){
            total += key.charCodeAt(0);
            }

            return total % this.size;
    }

    set(key, value){
        const index = this.hash(key)
        this.table[index] = value;
    }

    get(key){
        const index = this.hash(key)
        return this.table[index];
    }

    remove(key){
        const index = this.hash(key)
        this.table[index] = undefined;
    }

    display(){
        for (let i = 0; i<this.table.length; i++) {
           (this.table[i] != undefined)?(console.log(i, this.table[i])):(undefined)
        }
    }
}

const table = new hashTable(12);
table.set("name", "Pranav Shinde")
table.set("age", 20)
table.set(1, 'one')
table.set(2, 'two')
table.set(3, 'three')
table.display()
console.log(table.get('name'))
table.remove('name')
table.display()