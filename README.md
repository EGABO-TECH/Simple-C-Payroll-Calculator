# Simple C Payroll Calculator

A lightweight C program built to compute employee regular salaries, overtime allocations, and budget compliance constraints.

---

##  Table of Contents
1. [Systems Analysis Steps](#1-systems-analysis-steps)
2. [Flowchart Architecture](#2-flowchart-architecture)
3. [Algorithmic Pseudocode](#3-algorithmic-pseudocode)
4. [How to Compile and Run](#4-how-to-compile-and-run)

---

## 1. Systems Analysis Steps
* **Problem Definition:** Establish an automated system to process salaries for both full-time and part-time staff.
* **Identify Constraints:** Apply an overtime multiplier of 1.5x for hours worked past 40, and enforce a strict **$200,000 budget threshold** guard that rejects calculations if exceeded.
* **Logic Architecture:** Map out processing workflows through visual flowcharts and step-by-step text pseudocode before writing the source code.

---

## 2. Flowchart Architecture
```text
       [ START ] ──> Input: hours, rate ──> / hours <= 40? /
                                                │       │
                                       (YES) ───┘       └───> (NO)
                                         │                         │
                                         ▼                         ▼
                           regpay = hours * rate     regpay = 40 * rate
                           ovtpay = 0                ovtpay = (hours - 40) * rate * 1.5
                                         │                         │
                                         └───────────┬─────────────┘
                                                     │
                                                     ▼
                                         netpay = regpay + ovtpay
                                                     │
                                                     ▼
                                           / netpay > 200000? /
                                                │       │
                                       (YES) ───┘       └───> (NO)
                                         │                         │
                                         ▼                         ▼
                                   Print Error               Print Payroll
                                         │                         │
                                         └───────────┬─────────────┘
                                                     │
                                                     ▼
                                                  [ STOP ]

```
---
## 3. Algorithmic Pseudocode
START
    INPUT hours, rate
    IF hours <= 40 THEN
        regpay = hours * rate
        ovtpay = 0
    ELSE
        regpay = 40 * rate
        ovtpay = (hours - 40) * rate * 1.5
    ENDIF
    netpay = regpay + ovtpay
    IF netpay > 200000 THEN
        PRINT "Error: Exceeds $200,000 Budget Threshold."
    ELSE
        PRINT regpay, ovtpay, netpay
    ENDIF
END
---

## 4. How To Compile and Run
---
# Compile the C program
```
gcc main.c -o PayrollCalculator
```
# Run the compiled application
```
./PayrollCalculator
```
---
Engineered with passion by EGABO AARON
