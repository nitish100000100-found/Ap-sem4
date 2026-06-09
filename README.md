# Assignment 17: User Onboarding Validation Module

## Question

Build a user onboarding validation module for a platform.

The system must validate:

* Email address
* User age

### Requirements

#### Email Validation

* Email must not be null
* Email must not be empty
* Email must match a valid email pattern

#### Age Validation

* User must be at least 18 years old

### Python Requirements

* Implement custom exception:

  * InvalidEmailError
  * UnderageError
* Create RegistrationService class
* Implement:

```python
def register_user(self, email: str, age: int) -> bool
```

* Use assert for internal invariant checking
* Write pytest test cases
* Use pytest.fixture
* Use pytest.raises for exception testing

## Program

**File:** `registration_service.py`

The program validates user registration requests by checking email format and age requirements. Custom exceptions are raised when validation fails, and pytest is used for automated testing.

## Concepts Used

* Custom Exceptions
* Regular Expressions
* Assertions
* Pytest Fixtures
* Unit Testing
* Exception Handling

## Execution

Run program:

```bash
python3 registration_service.py
```

Run tests:

```bash
pytest registration_service.py
```

## Test Cases Covered

* Successful registration
* Invalid email format
* Empty email
* Underage user
* None email assertion

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
