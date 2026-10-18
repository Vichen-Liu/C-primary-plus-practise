# C Primer Plus 章节练习

记录《C Primer Plus（第 6 版）》各章的学习笔记、书后练习与编程题代码。

## 目录约定

每一章（或每组练习）一个顶层文件夹，例如：

```text
第一章
第二章
第三章
...
```

每个文件夹内可直接放 `.c` / `.cpp` 源文件，也可以放该练习对应的 Visual Studio 工程。

## 编译运行

单个源文件可以用 MSVC 或 GCC 直接编译：

```powershell
gcc .\ch02\ex01.c -o .\ch02\ex01.exe
.\ch02\ex01.exe
```

## 说明

`x64/`、`Debug/` 等编译产物已在 `.gitignore` 中排除，仓库中只保留源码与工程文件。
