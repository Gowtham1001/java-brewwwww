import java.util.Scanner;
class Node{
    int data;
    Node left;
    Node right;

    public Node(int n){
        this.data=n;
        this.left=null;
        this.right=null;
    }
}
class BianryTree{
    Node root;
    public Node insert(int n){
            if(root==null){
                root=new Node(n);
            }
            else{
               Node temp=root;
               while(temp!=null){
                if(temp.data<n){
                    temp=temp.left;
                }
                else{
                    temp=temp.right;
                }
               }
               temp=new Node(n);
            }
            return root;
    }
    public Node delNode(int n,Node root){
        if(root==null){
            return null;
        }
        if(root.data==n){
            if(root.left==null&&root.right==null){
                root=null;
                
            }
            else if(root.left==null && root.right!=null){
                root=root.right;
                
            }
            else if(root.right==null && root.left!=null){
                root = root.left;
                
            }
            else{
                
            }
        }
        else{
            if(root.data<n){
                root.right=delNode(n,root.right);
            }
            else{
                root.left=delNode(n, root.left);
            }
        }
        return root;
    }

}





public class bst {
    
}
