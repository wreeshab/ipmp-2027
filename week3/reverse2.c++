void printReverse(Node *head) {
  
    stack<int> st;
    Node *curr = head;

    while (curr != nullptr) {
        st.push(curr->data);
        curr = curr->next;
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
