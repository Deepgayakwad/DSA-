#include <iostream>
using namespace std;

class Dequeue {
public:
    int front;
    int rear;
    int size;
    int* arr;

    Dequeue(int n) {
        this->size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void push_front(int data) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }
        arr[front] = data;
        cout << "Pushed from front: " << arr[front] << endl;
    }

    void push_back(int data) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
        cout << "Pushed from back: " << arr[rear] << endl;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Popped from front: " << arr[front] << endl;
        if (front == rear) { // Single element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Popped from back: " << arr[rear] << endl;
        if (front == rear) { // Single element
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }
    }

    int start() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int end() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};

int main() {
    Dequeue d(5);

    d.push_front(10);
    d.push_front(20);
    d.push_front(30);

    d.pop_front();
    d.pop_front();

    d.push_back(50);
    d.push_back(60);
    d.push_back(70);
    d.push_back(80);

    d.pop_back();
    d.pop_back();

    d.push_back(90);
    d.push_back(100);

    d.push_back(1000);

    return 0;
}
