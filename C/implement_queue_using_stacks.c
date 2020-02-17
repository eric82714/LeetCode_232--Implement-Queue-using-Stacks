typedef struct {
    int stack[100];
    int size;
} MyQueue;

/** Initialize your data structure here. */

MyQueue* myQueueCreate() {
    MyQueue* myQueue = malloc(sizeof(MyQueue));
    myQueue->size = 0;
    
    return myQueue;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
    obj->stack[obj->size] = x;
    obj->size ++;
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
    if(obj->size == 0) return -1;

    int front_num = obj->stack[0];    
    obj->size --;
    for(int i = 0; i < obj->size; i++) {
        obj->stack[i] = obj->stack[i+1];
    }

    return front_num;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
    if(obj->size == 0) return -1;
    
    return obj->stack[0];
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
    return obj->size == 0;
}

void myQueueFree(MyQueue* obj) {
    
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
