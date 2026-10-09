# Banco Brigantino - Banking Transaction & Account Management System

A modular C++ console application designed to handle banking operations, client portfolios, and account lifecycle management. Built using core Object-Oriented Programming (OOP) paradigms, custom template collections, and transaction validation logic.

---

## Overview

The system models a commercial branch environment where clients hold multiple account types subject to distinct financial rules. It centralizes client onboarding, automated account generation, unique NIB (Número de Identificação Bancária) creation/validation, and transactional error handling to maintain ledger integrity.

---

## Key Features

- **Object-Oriented Domain Architecture**:
  - Implements an extensible inheritance hierarchy distinguishing between **Current Accounts** (credit-limit backed overdraft capabilities) and **Savings Accounts** (interest rate tracking).
  - Separates interface declarations (`.h`) and implementations (`.cpp`) for strict modularity and fast compilation.

- **Account Lifecycle & Validation**:
  - **Automated Client Onboarding**: Auto-generates incremental client IDs and automatically provisions a primary Current Account upon registration.
  - **NIB Generation & Checksum Validation**: Implements deterministic generation and mathematical validation algorithms for Portuguese Bank Identification Numbers (NIB).
  - **Operational Safeguards**: Enforces strict transaction boundaries—rejecting overdrafts exceeding assigned credit lines and preventing deposits against invalid or non-existent NIBs.

- **Transaction Management**:
  - Supports atomic deposit and withdrawal workflows.
  - Tracks transactional state and account balances under variable operational constraints.

- **Generic In-Memory Collections**:
  - Employs a custom C++ template collection structure (`Colecao<T>`) for managing dynamic records of clients, accounts, and operations without tight coupling to standard library containers.

---

## Class Architecture

| Class | Responsibility |
|---|---|
| `Bank` | Central system controller managing collections of clients, account mapping, and high-level transactions. |
| `Customer` | Stores client profiles (auto-incremented ID, personal details, contact information, associated accounts). |
| `Account` | Abstract/base entity handling account identifiers, unique NIB generation, and shared balance operations. |
| `CurrentAccount` | Concrete account extending base logic with configurable overdraft limits and withdrawal capabilities. |
| `SavingsAccount` | Concrete savings vehicle maintaining interest rate parameters without direct withdrawal mechanics. |
| `Order` / `Time` | Models transactional operations, execution timestamps, and historical auditing. |

---

## Tech Stack

- **Language**: C++ (C++14/C++17 standard)
- **Paradigm**: Object-Oriented Programming (Polymorphism, Inheritance, Encapsulation, Custom Class Templates)
- **Tooling**: MS Visual Studio / GCC / Clang compatible

---

## Getting Started

### Prerequisites

- C++ compiler (`g++`, `clang++`, or MSVC / Visual Studio 2015+)
