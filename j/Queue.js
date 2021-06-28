const MAXSIZE = 30;
class Queue {
    constructor() {
        this.front = 0;
        this.rear = 0;
        this.queue = new Array(MAXSIZE)
    }
    enqueue(item) {
        if (this.rear == MAXSIZE) {
            console.log("Queue is Full")
            return false
        }
        this.queue[this.rear++] = item
    }
    dequeue() {
        if (this.front == this.rear) {
            console.log('Queue is Emty')
            return false
        }
        const item = this.queue[this.front]
        for (let i = this.front; i < this.rear - 1; i++) {
            this.queue[i] = this.queue[i + 1]
        }
        delete this.queue[--this.rear]
        return item
    }
    showQueue() {
        if (this.front == this.rear) {
            console.log('Queue is Emty')
            return
        }
        for (let i = this.front; i < this.rear; i++) {
            console.log('[Displaying', this.queue[i])
        }
    }
    next() {
        if (this.isEmty()) {
            console.log('Queue is Emty')
            return
        }
        return this.queue[this.front]
    }
    isEmty() {
        return this.front == this.rear
    }
}
module.exports = Queue