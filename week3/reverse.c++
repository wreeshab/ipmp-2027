class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        int count = 0;
        Node* curr = head;
        while(curr != NULL){
            curr = curr->next;
            count++;
        }
        int target = count - k;
        if(target <0) return -1;
        curr = head;
        for(int i =0;i<target; i++){
            curr = curr->next;
        }
        return curr->data;
    }
};

