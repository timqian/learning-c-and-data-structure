## 一些要点

- main 函数与其他函数无异，只是它被程序自动调用（如操作系统，调试器）
- 在c语言中，字符串就是字符数组
- 循环－使用了计算机的计算优势。数组－使用了计算机的存储优势
- 可以用 struct 关键词来定义结构体（数据结构）
- 使用 assert 来验证函数输入合法性
- c语言使用 Call Stack(调用栈) 来保存函数的调用关系。Call Stack 由多个 Stack Frame(栈帧) 组成。一个栈帧对应一个没有运行完的函数，其中保存了该函数的 **返回地址** 和 **局部变量**。这样不仅能使函数执行完毕之后找到正确的返回地址，还保证了各个函数局部变量之间互不相干。

## 问题

1. 为什么大的数组最好定义在 main 函数外面呢？

  因为 main 函数中的变量保存在 Call Stack 中，而 Call Stack 的大小是限制的。当总大小超过允许范围时。会造成 **Stack Overflow** !!
  造成 Stack Overflow 的另一种情形是递归次数太多，因为每次递归都要往 Call Stack 中增加一个 Stack Frame。

2. Stack Overflow 时，为什么报出的错误为：Segmentation Fault

  c代码编译后产生的文件保存的内容因操作系统而异，有不同的格式，但是具有相同的概念 -- segmentation(段)。可以用 `size` 命令查看可执行文件中各个段的大小。其中，Text Segment 储存指令， Data Segment 中储存已初始化的全局变量，BSS/OBJC(?) Segment 储存未赋值全局变量所需空间。需要注意的是 Call Stack 并不储存在可执行文件中，而是在运行时创建。Call Stack 所在 Segment 称为 Stack Segment。它也有自己的大小（和其他 Segment 一样），当越界访问时，出现错误： **Segmentation Fault**

3. runtime 是什么（听说 js 单线程语言，但是因为 runtime 使其可以并发）
