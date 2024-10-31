#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Compare {
public:
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

Node* mergeKSortedList(vector<Node*>& lists) {
    if (lists.empty()) return nullptr;

    priority_queue<Node*, vector<Node*>, Compare> minHeap;

    // Step 1: Insert all first elements of k lists into minHeap
    for (int i = 0; i < lists.size(); i++) {
        if (lists[i] != nullptr) {
            minHeap.push(lists[i]);
        }
    }

    Node* head = nullptr;
    Node* tail = nullptr;

    // Step 2: Process the minHeap until it's empty
    while (!minHeap.empty()) {
        Node* top = minHeap.top();
        minHeap.pop();

        if (top->next != nullptr) {
            minHeap.push(top->next);
        }

        if (head == nullptr) {
            head = top;
            tail = top;
        } else {
            tail->next = top;
            tail = top;
        }
    }

    return head;
}

void printKSortedLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create individual linked lists and add them to the vector
    Node* list1 = new Node(1);
    list1->next = new Node(4);
    list1->next->next = new Node(5);

    Node* list2 = new Node(1);
    list2->next = new Node(3);
    list2->next->next = new Node(4);

    Node* list3 = new Node(2);
    list3->next = new Node(6);

    vector<Node*> lists = {list1, list2, list3};

    Node* mergedHead = mergeKSortedList(lists);

    cout<<"result after merge k sorted linked list : "<<endl;
    printKSortedLL(mergedHead);

    return 0;
}
