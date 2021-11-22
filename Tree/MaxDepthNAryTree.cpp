/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int res=0;
    void calcDepth(Node* root,int count){
        if(root==NULL){
            return;
        }
        if(root->children.size()==0){//leaf node
            res=max(res,count);
            count=1;
        }
        count++;
        for(auto node:root->children){
            calcDepth(node,count);
        }
    }
    int maxDepth(Node* root) {
        int count=1;
        calcDepth(root,count);
        return res;
    }
};
