
class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        unordered_map<Node*, int> mpp;
        Node* temp = head1;
        while(temp != NULL){
            mpp[temp]++;
            temp = temp->next;
        }
        temp = head2;
        while(temp!= NULL){
            if(mpp.find(temp) != mpp.end()){
                return temp;
            }
            temp = temp->next;
        }
    }
};
