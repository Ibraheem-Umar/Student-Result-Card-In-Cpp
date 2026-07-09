# Student-Result-Card-In-Cpp

A C++ console application that calculates and generates academic result sheets for F.Sc (Part 1 & 2) students, featuring variable subject weightage, percentage calculations, and automated grading logic.

## Features
- **Variable Subject Weightage:** Supports standard F.Sc marks distribution (200 marks for core subjects, 50 marks for Islamiyat and Pakistan Studies).
- **Automated Metrics Calculation:** Computes total obtained marks, overall percentage, and passing status.
- **Dynamic Grading Engine:** Uses an efficient conditional structure to assign grades (A+, A, B, C, etc.) based on overall performance thresholds.
- **Formatted Console Output:** Generates a structured tabular report card directly in the terminal interface.

##  Marks Distribution Logic
The application enforces the following academic criteria:
- **Core Subjects:** 200 Max Marks (Combined Part 1 & 2)
- **Islamiyat / Pakistan Studies:** 50 Max Marks
- **Passing Threshold:** Standard academic passing criteria applied to final aggregate metrics.

##  Tech Stack & Tools
- **Language:** C++ (C++11 or higher)
- **Paradigm:** Procedural programming with structured logic, input validation arrays, and loops.
- **Compiler/IDE:** Compatible with GCC, Clang, MSVC, and Dev-C++ / VS Code.

##  Sample Terminal Output
```text
===================================
English:145
Maths:133
Chemistry:156
Physics:178
Urdu:143
Islamiate:45
Pakstudies:47
===========================================================================
||                                 *RESULT*                              ||
===========================================================================
===========================================================================
||       English      ||     200     ||              145          ||
---------------------------------------------------------------------------
||     Mathematics    ||     200     ||              133          ||
---------------------------------------------------------------------------
||      Chemistry     ||     200     ||              156          ||
---------------------------------------------------------------------------
||       Physics      ||     200     ||              178           ||
---------------------------------------------------------------------------
||        Urdu        ||     200     ||              143           ||
---------------------------------------------------------------------------
||      Islamiate     ||      50     ||              45           ||
---------------------------------------------------------------------------
||      Pakstudies    ||      50     ||             47         ||
===========================================================================
||        TOTAL       ||     1100    ||             847       ||
===========================================================================
        Average:        ||  105.875  ||         Percentage:     ||  77%  ||     Grade=  ||  B  ||
