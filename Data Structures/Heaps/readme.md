-> Definition :
    > Heap is a data structure which is a complete binary tree that comes with a Heap Order Property.
    > A binary tree is a non-linear data structure which contains atmost 2 child i.e <=2
    > A complete binary tree is a special type of binary tree where all the levels of the tree are filled completely except the lowest level nodes which are filled from as left as possible.

-> Example :
    > ![Complete Binary Tree .1](https://scaler.com/topics/images/introduction-to-complete-binary-tree.webp)
    > ![Complete Binary Tree .2](https://miro.medium.com/v2/resize:fit:1200/1*CMGFtehu01ZEBgzHG71sMg.png)
    > ![Complete Binary Tree .3](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQHVkv-x0HpUSaGOcaTYQHqObco6dz6Z4ZlXbvopd4SxdPRFbjT3k3gxeznIEf8UkGVM3o&usqp=CAU)
    > ![Complete Binary Tree .4](https://www.baeldung.com/wp-content/uploads/sites/4/2020/09/full.png)

-> There are two types of Heap Order Property  
    > Max-Heap : The child nodes should be smaller than the parent node.
               : The parent node should be greater
        > Example :                 50
                                40      30
                            20      15
    > Min-Heap : The child nodes should be greater than the parent node.
               : The parent node should be smaller
        > Example :                 30
                                40      50
                            60      70
    > Example : ![Max-Heap and Min-Heap](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221220165711/MinHeapAndMaxHeap1.png)

-> Insertion in Heaps : 
    > Node : ith index
    > Left child : !For 1 based Indexing = 2 * ith index, !For 0 based Indexing = 2 * ith index + 1
    > Right child : !For 1 based Indexing = 2 * ith index + 1, !For 0 based Indexing = 2 * ith index + 2
    > Parent : (i / 2)

-> Time Complexity : O(log n), Since we are comparing (i / 2) times for checking the parent

-> Heapify Algorithm : 
    Ek node ko utha kar uski sahi jagah par lejana is heapfify algorithm
    Time Complexity : O(log n)

-> Heap sort : 
    Since in Max-Heap the root element is the biggest node;
    > Step 1 : swap root with last element of array and reduce the size of the array
        swap(arr[root], arr[size]);
            size--;
    > Step 2 : Place the root node to correct position i.e Heapify Algorithm.
    > Step 3 : Base case iterate till the heap size is greater than 1