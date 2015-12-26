## Notes:

1. [About the language](https://github.com/timqian/learning-c-and-data-structure/tree/master/language)

## 代码编译与调试（使用clang， lldb）

1. `clang ***.c -g`
2. `lldb a.out`

## clang, lldb 的基本使用：

#### 编译

- `clang 0_expression.c -g`: 编译的同时生成调试用的符号表(?)

#### 调试(基于gdb，仍需看对照和试验之后修改)

- `lldb -- a.out 1 2 3`: Launch a process for with arguments a.out 1 2 3 without having to supply the args every time.
- `r(run)`: 运行直到程序结束或遇到 break point
- `b(break)`: 在指定行号或函数开头处设置break point(eg: `b main`, `b 10`)
- `cl(clear)`: 在指定行号或函数开头处取消break point(eg: `cl main`)
- `c(continue)`: 程序中断后继续执行
- `n(next)`: 执行一条语句；若有函数调用，把它作为整体
- `s(step)`: 执行一条语句；若有函数调用，进入函数内部
- `u(until)`: 执行到指定行号或函数开头
- `p(print)`: 打印变量或表达式的值
- `disp(display)`: (eg: `disp a+b`) 设置某表达式为display，程序停下来时显示其值
- `i(info)`: 显示信息
  - `i b`: 显示所有 break point
  - `i disp`: 显示display
  - `i lo`: 显示局部变量
- `help`: 获取帮助信息


## 参考

- [算法竞赛入门经典](http://www.amazon.cn/%E7%AE%97%E6%B3%95%E8%89%BA%E6%9C%AF%E4%B8%8E%E4%BF%A1%E6%81%AF%E5%AD%A6%E7%AB%9E%E8%B5%9B-%E7%AE%97%E6%B3%95%E7%AB%9E%E8%B5%9B%E5%85%A5%E9%97%A8%E7%BB%8F%E5%85%B8-%E5%88%98%E6%B1%9D%E4%BD%B3/dp/B002WB0U4Q/ref=sr_1_3?s=books&ie=UTF8&qid=1451096806&sr=1-3&keywords=%E7%AE%97%E6%B3%95%E7%AB%9E%E8%B5%9B%E5%85%A5%E9%97%A8%E7%BB%8F%E5%85%B8): 是一本学习c语言，入门数据结构，算法的好书
- [gcc 与 lldb 命令对照](http://lldb.llvm.org/lldb-gdb.html)
