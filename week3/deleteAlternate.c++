/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        if (head == NULL) 
            return; 
        
        Node* prev = head;
        Node* curr = head->next;
        
        while(curr && prev){
            prev->next = curr->next;
            
            prev = prev->next;
            if(prev){
                curr = prev->next;
            }
        }
        
    }
};

