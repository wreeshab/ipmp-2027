
class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* returnHead = new Node(-1);
        Node* temp = returnHead;
        Node* t1 = head1;
        Node* t2 = head2;
        while(t1 && t2){
            if(t1->data > t2->data){
                t2 = t2->next;
            }else if(t1->data < t2->data){
                t1 = t1->next;
            }else{
                temp->next = new Node(t1->data);
                temp = temp->next;
                t1 = t1->next;
                t2 = t2->next;
                
            }
        }
        temp->next = NULL;
        return returnHead->next;
    }
};

