public class QueueUsingArray {
 
    private int capacity;
    int queueArr[];
    int front;
    int rear;
    int currentSize = 0;
 
    public QueueUsingArrayMain(int sizeOfQueue) {
        this.capacity = sizeOfQueue;
        front = 0;
        rear = -1;
        queueArr = new int[this.capacity];
    }
 
    // this method is used to add element in the queue
    
    public void enqueue(int data) {
        if (isFull()) {
            System.out.println("Queue is full!! Can not add more elements");
        } else {
            rear++;
            if (rear == capacity - 1) {
                rear = 0;
            }
            queueArr[rear] = data;
            currentSize++;
            System.out.println(data + " added to the queue");
        }
    }
 
 
     // This method removes an element from the front of the queue
  
    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty!! Can not dequeue element");
        } else {
            front++;
            if (front == capacity - 1) {
                System.out.println(queueArr[front - 1] + " removed from the queue");
                front = 0;
            } else {
                System.out.println(queueArr[front - 1] + " removed from the queue");
            }
            currentSize--;
        }
    }
 
    // This method is use to check if element is full or not
   
    public boolean isFull() {
        if (currentSize == capacity) {
            return true;
        }
        return false;
    }
 
    // This method is use to check if element is empty or not
  
    
    public boolean isEmpty() {
 
        if (currentSize == 0) {
            return true;
        }
        return false;
    }
 
    public static void main(String a[]) {
 
        QueueUsingArrayMain queue = new QueueUsingArrayMain(5);
        queue.enqueue(6);
        queue.dequeue();
        queue.enqueue(3);
        queue.enqueue(99);
        queue.enqueue(56);
        queue.dequeue();
        queue.enqueue(43);
        queue.dequeue();
        queue.enqueue(89);
        queue.enqueue(77);
        queue.dequeue();
        queue.enqueue(32);
        queue.enqueue(232);
    }
}
