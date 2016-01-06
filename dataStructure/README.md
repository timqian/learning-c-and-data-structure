## Queue and Stack (FIFO & LIFO)

队列与栈都可以由数组实现。共同特点是都有 `push` 和 `pop` 这两种方法，不同在于 queue 先 push 进去的先 pop 出来；而 stack 最后 push 进去的先 pop 出来。队列与栈的定义是为了方便某些问题的解决。例子见《算法竞赛》第一版 p89 p91 的两个例子。在 javascript 中，queue 与 stack 的功能，已经包含在 array 中了。

## Linked list

链表的每个 node 中保存了本节点信息以及下一个节点的地址(单向链表，双向类似)。这种结构的好处在于插入和删除节点不需要移动其他元素(相对于数组，因为数组保存在一块连续内存中)。链表可以用 结构体 ＋ 指针实现。也可用 STL 的 vector

## 二叉树

也是用 stuct 构造的数据结构。适用于快速搜索？
