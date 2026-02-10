# Low-Level C Practice
### A long-term systems programming learning project

![C](https://img.shields.io/badge/language-C-blue.svg)
![Platform](https://img.shields.io/badge/platform-WSL%20%7C%20Ubuntu-lightgrey)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Status](https://img.shields.io/badge/progress-active-brightgreen)

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
- Address-of (`&`) and dereference (`*`)  
- Pointer to pointer (`**`)  
- Pointer sizes vs. value sizes  
- Swapping values via pointers  
- Apple-style Makefile for multiple executables  

### Lesson 4 — Memory Model (Stack vs. Heap)
- Stack allocation vs. heap allocation  
- `malloc` / `free` basics  
- NULL checks and cleanup  

### Lesson 5 — Pointers, `const`, and Output Params
- `const` correctness for read-only inputs  
- Output parameters (`out_*`) patterns  
- Null checks and defensive APIs  
- Manual string duplication with heap memory  

### Lesson 6 — String Utilities Module
- Public header + private implementation split  
- String length, count, and starts-with helpers  
- Safe APIs that handle NULL  
- Reusable utility library structure  

### Lesson 7 — Error Handling Patterns
- `enum`-based error codes  
- Error-to-string conversion  
- API design that returns explicit status  

---

## 📂 Project Structure
projects/
├── 01_memory_allocator/
├── 02_variables_and_data_types/
├── 03_pointers/
├── 04_memory_model/
├── 05_pointers_and_const/
├── 06_string_utils/
└── 07_error_handling/


Each lesson includes:
- Source `.c` files  
- A dedicated Makefile  
- Exercises, challenges, and examples  

---

## 📈 Lesson Progress Tracker

| Lesson | Topic | Status | Notes |
|--------|---------------------------|--------|------------------------|
| 1 | C Basics | ✔️ Completed | |
| 2 | Variables & Data Types | ✔️ Completed | |
| 3 | Pointers Basics | ✔️ Completed | |
| 4 | Memory Model (Stack vs. Heap) | ✔️ Completed | |
| 5 | Pointers, `const`, Output Params | ✔️ Completed | |
| 6 | String Utilities | ✔️ Completed | |
| 7 | Error Handling | ✔️ Completed | |
| 8 | Debugging & Sanitizers | ⏳ Pending | |
| 9 | Custom Memory Allocator | ⏳ Pending | |
| 10 | System Calls & OS Concepts | ⏳ Pending | |

This repository will grow continuously as I move toward professional-level C.

---

## 🗺️ Roadmap

- [ ] Complete foundational C lessons (1–10)  
- [ ] Build a dynamic memory allocator  
- [ ] Implement a mini shell (custom parser + system calls)  
- [ ] Implement a dynamic array module  
- [ ] Recreate parts of the C standard library (string functions)  
- [ ] Implement a hash map  
- [ ] Implement a stack/queue library  
- [ ] Work on OS-level experiments (signals, pipes, fork, exec)  
- [ ] Prepare Apple-level low-level interview materials  

---

## 🔧 Build Instructions

All lessons use Makefiles.

To build a lesson:

```bash
cd projects/lesson_03
make
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
