# Copilot Instructions for DSA Codebase

## Overview
This repository contains C++ implementations of classic data structures and algorithms, along with LeetCode problem solutions in Python. The main focus is on learning and practicing DSA concepts, primarily inspired by Abdul Bari's lectures.

## Directory Structure
- **Root C++ files**: Each file (e.g., `adtbinaryseach.cpp`, `adtdelete.cpp`, `doublelink.cpp`) implements a specific data structure or algorithm. Executables are generated alongside source files.
- **LeetCode Solutions**: Subfolders like `0053-maximum-subarray/` and `0121-best-time-to-buy-and-sell-stock/` contain Python solutions and problem-specific READMEs.

## Build Workflow
- **C++ Compilation**: Use the VS Code build task `C/C++: clang build active file` to compile C++ files. This produces an executable with the same basename as the source file in the same directory.
  - Example: Editing `adtbinaryseach.cpp` and running the build task creates `adtbinaryseach` (or `.exe` on Windows).
- **No central Makefile or build system**: Each C++ file is standalone; compile only the file you are working on.

## Project Conventions
- **File Naming**: Source files and executables share the same basename. Python solutions are named after the LeetCode problem number.
- **No cross-file dependencies**: C++ files do not include or depend on each other. Each is a self-contained implementation.
- **Minimal external dependencies**: No third-party libraries are used in C++ code. Python solutions use only standard libraries.
- **Documentation**: Problem-specific folders contain a README with the problem statement and examples.

## Patterns and Examples
- **C++ Data Structures**: Each file demonstrates a single concept (e.g., linked lists, binary search, sorting). Look for main functions and example usage within each file.
- **Python LeetCode Solutions**: Each folder contains a single `.py` file with the solution and a README describing the problem.

## Key Files
- `adtbinaryseach.cpp`, `adtdelete.cpp`, `doublelink.cpp`, etc.: C++ implementations of DSA topics.
- `0053-maximum-subarray/0053-maximum-subarray.py`: Python solution for LeetCode 53.
- `0121-best-time-to-buy-and-sell-stock/0121-best-time-to-buy-and-sell-stock.py`: Python solution for LeetCode 121.

## Tips for AI Agents
- When adding new C++ algorithms, follow the single-file, self-contained pattern.
- For new LeetCode solutions, create a folder named with the problem number and add both the `.py` solution and a README.
- Use the VS Code build task for C++ compilation; do not assume a global build system.
- Reference existing files for naming and structure conventions.

---
_Last updated: 12 September 2025_
