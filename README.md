# Assignment 9: Banking System using Inheritance and Polymorphism

## Question

Design a banking system in Java with:

### Base Class: Account

* Private fields:

  * accountNumber
  * ownerName
  * balance
* Provide getters and setters
* Implement constructor overloading and constructor chaining
* Implement:

  * deposit()
  * withdraw()
  * display()

### Derived Classes

#### SavingsAccount

* Add interestRate
* Override display()
* Show calculated interest

#### CurrentAccount

* Add overdraftLimit
* Restrict withdrawals accordingly
* Override display()

### Requirements

* Proper encapsulation
* Constructor overloading and chaining using `this(...)`
* Inheritance and method overriding using `@Override`
* Use of `super`
* Polymorphism using `Account` references
* Validation using exceptions

## Program

**File:** `BankSystem.java`

The program demonstrates:

* Encapsulation using private fields and getters/setters
* Constructor chaining
* Inheritance
* Method overriding
* Polymorphism
* Exception handling and validation

## Concepts Used

* Classes and Objects
* Encapsulation
* Constructor Overloading
* Constructor Chaining
* Inheritance
* Method Overriding
* Polymorphism
* Exception Handling
* ArrayList

## Compilation

```bash
javac BankSystem.java
```

## Execution

```bash
java BankSystem
```

## Expected Output

* Details of Savings Account
* Details of Current Account
* Interest calculation for Savings Account
* Overdraft handling for Current Account
* Error message for invalid withdrawal

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
