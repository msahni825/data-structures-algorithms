/**
 * // Definition for a Node.
 * function Node(val, left, right, next) {
 *    this.val = val === undefined ? null : val;
 *    this.left = left === undefined ? null : left;
 *    this.right = right === undefined ? null : right;
 *    this.next = next === undefined ? null : next
 * };
 */

/**
 * @param {Node} root
 * @return {Node}
 */
var connect = function(root) {
    if(root){
        dfs(root);
    }
    return root;
};
function dfs(node){
    if(node.left){
       node.left.next=node.right;
       if(node.next){
           node.right.next=node.next.left;
       }
        dfs(node.left);
        dfs(node.right);
    }
}
