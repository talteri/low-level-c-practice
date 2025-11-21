# Low-Level C Practice
### A long-term systems programming learning project

This repository documents my journey from fundamental C concepts to advanced
low-level programming, memory manipulation, and systems-level development.

The goal of this project is to build strong foundations required for real
systems work (OS-level, performance-critical code, memory allocators, etc.),
with the long-term vision of becoming a low-level C developer at Apple.

---

## 📘 Lessons Completed

### Lesson 1 — C Basics
- Basic syntax
- First program
- Compiling with clang
- Simple Makefile

### Lesson 2 — Variables, Data Types, and Functions
- Primitive types
- Function declarations and definitions
- Scope and lifetime
- Basic I/O

### Lesson 3 — Pointers & Memory Basics
- What a pointer is
- Address-of (&)
- Dereference (*)
- Pointer to pointer (**)
- Using pointers to modify variables
- Apple-style Makefile for multiple executables

---

## 📂 Project Structure
projects/
├── lesson_01/
├── lesson_02/
└── lesson_03/

Each lesson includes:
- Source `.c` files
- A dedicated Makefile
- Exercises, challenges, and examples

---

## 🚧 To Be Continued

Upcoming lessons (being added gradually as I progress):

- Lesson 4: Dynamic Memory (malloc, free, realloc)
- Lesson 5: Arrays, Pointer Arithmetic, Strings
- Lesson 6: Structs & Memory Layout
- Lesson 7: File I/O
- Lesson 8: Debugging, Address Sanitizers, Leaks
- Lesson 9: Custom Memory Allocator
- Lesson 10: System Calls & OS-Level Work
- Final Project: Build a complete low-level system module

This repository will grow continuously as I move toward professional-level C.

---

## 🔧 Build Instructions

All lessons use Makefiles.

To build a lesson:

```bash
cd projects/lesson_03
make
To clean binaries:
make clean
```

🎯 Long-Term Goal

Build the fundamental skills needed to work as a low-level C developer at Apple, including:

- memory-safe C

- pointer-heavy code

- efficient data structures

- system-level debugging

- UNIX/macOS internals

🧑‍💻 Author

Tal Teri
“Learning low-level C one lesson at a time.”