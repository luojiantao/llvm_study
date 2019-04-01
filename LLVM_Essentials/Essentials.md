# 目录
## Preface   iii
## 第一章 使用LLVM)
### 模块化的设计和依赖库的集合
### 熟悉LLVM IR
### LLVM工具并且在命令行中使用他们
### 总结

## 第二章 构建LLVM IR
### 创建一个LLVM模块
### 在模块里插入一个函数
### 添加一个块到一个函数
### 生成一个全局变量
### 生成返回声明
### 生成函数参数
### 在一个基础块中插入一个简单的算术语句
### 生成if-else条件IR
### 生成循环的LLVM IR

## 第三章 高级的LLVM IR
### 内存访问操作
### 获得一个成员的地址
### 从内存中读取
### 写到一个内存位置
### 插入一个标量到一个vector
### 从一个vector提取一个标量
### 总结

## 第四章 基本IR转换
### 配置工具
### pass和pass管理
### 在当前pass使用其他pass信息
#### AnalysisUsage::addRequired<> method
#### AnalysisUsage::addRequiredTransitive<> method
#### AnalysisUsage::addPreserved<> method
### 简单的指令例子
### 指令组合
### 总结

## 第五章 高级的IR块转换
### 循环处理
### 标量演化
### LLVM内部函数
### 矢量化
### 总结

## 第六章 IR到SelectionDAG阶段
### 转换IR到SelectionDAG
### 合法化SelectionDAG
### 优化SelectionDAG
### 指令选择器
### 调度并且生成机器指令
### 寄存器分配
### 代码生成
### 总结

## 第七章 为了目标体系结构生成代码
### 简单的后端
#### 定义寄存器和寄存器集合
#### 定义调用约定
#### 定义指令集合
### 实现底层框架
### 打印指令
### 总结



