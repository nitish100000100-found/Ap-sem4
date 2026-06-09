# Assignment 12: E-Commerce Order Processing System using SOLID Principles

## Question

Design a system in Java/Python for processing customer orders in an e-commerce platform.

The system should support:

* Multiple payment methods (Credit Card, UPI, Wallet)
* Multiple notification channels (Email, SMS, Push)
* Different order types (Regular Order, Discounted Order, Priority Order)
* Multiple storage mechanisms (Database, File Storage)

## SOLID Principles Implemented

### Single Responsibility Principle (SRP)

Each class has a single responsibility:

* Order classes handle order logic
* Payment classes handle payment processing
* Notification classes handle notifications
* Storage classes handle persistence

### Open/Closed Principle (OCP)

The system can be extended by adding:

* New payment methods
* New notification channels
* New storage mechanisms

without modifying existing code.

### Liskov Substitution Principle (LSP)

All subclasses can be used through their base abstract classes:

* Payment
* Notification
* Storage
* Order

without affecting correctness.

### Interface Segregation Principle (ISP)

Small and focused interfaces are used:

* Payment
* Notification
* Storage

Classes implement only the behavior they require.

### Dependency Inversion Principle (DIP)

OrderService depends on abstractions instead of concrete implementations.

Dependencies are injected through the constructor.

## Program

**File:** `ecommerce_order_system.py`

The program:

1. Creates an order
2. Processes payment
3. Sends notification
4. Stores order details

using dependency injection and abstraction.

## Concepts Used

* Abstract Base Classes (ABC)
* Inheritance
* Method Overriding
* Dependency Injection
* SOLID Principles
* Polymorphism

## Execution

```bash
python3 ecommerce_order_system.py
```

## Expected Output

* Payment success message
* Notification message
* Order storage confirmation

for multiple order types and payment methods.

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
