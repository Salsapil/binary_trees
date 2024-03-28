### What is a binary tree?
**Binary Tree:**   
- A fundamental hierarchical data structure where each node can have at most two children: a left child and a right child. These nodes store data and pointers to their children.   
***
### What is the difference between a binary tree and a Binary Search Tree?   
**Binary Search Tree:** A specific type of binary tree where each node's value has a specific ordering property:   
- The value of a node is greater than all values in its left subtree.   
- The value of a node is less than all values in its right subtree.   
- This ordering allows for efficient searching and sorting operations.   
***
### What is the possible gain in terms of time complexity compared to linked lists?   
- **In a linked list**, you need to traverse potentially the entire list to find a specific value, resulting in an average time complexity of O(n).   
- **In a BST**, you can leverage the ordering property to narrow down the search path. In the average case, searching a BST takes O(log n) time (logarithmic).   
***
### What are the depth, the height, the size of a binary tree?   
- **Depth (of a node):** The number of edges from that node to the root node. The root node has a depth of 0.   
- **Height (of a binary tree):** The maximum depth of any node in the tree. An empty tree has a height of -1.   
- **Size (of a binary tree):** The total number of nodes in the tree.   
***
### What are the different traversal methods to go through a binary tree?
- **Inorder Traversal:** Visits nodes in the left subtree, then the root, then the right subtree.   
- **Preorder Traversal:** Visits the root, then the left subtree, then the right subtree.   
- **Postorder Traversal:** Visits the left subtree, then the right subtree, then the root.   
***
### What is a complete, a full, a perfect, a balanced binary tree?
- **Complete Binary Tree:** Every level except possibly the last is completely filled, and all nodes in the last level are as far left as possible.   
- **Full Binary Tree:** Every node has either zero or two children.   
- **Perfect Binary Tree:** A full binary tree where all leaves are at the same depth.   
- **Balanced Binary Tree:** The height of the tree is roughly proportional to the logarithm of the number of nodes.   
***
## Authors
**Shenouda Mikhael**
**Salsabil Ahmed**