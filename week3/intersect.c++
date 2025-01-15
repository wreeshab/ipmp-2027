class Solution {
  public:

    Node* intersectPoint(Node* head1, Node* head2) {
        Node* p1 = head1;
        Node* p2 = head2;
        
        while(p1 != p2){
            p1 = p1->next ? p1->next : head2;
            p2 = p2->next ? p2->next : head1;
        }
        return p1;
    }
};
