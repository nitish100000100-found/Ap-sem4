import re
import pytest


# Custom Exceptions
class InvalidEmailError(ValueError):
    def __init__(self, email):
        super().__init__(f"Invalid email address: {email}")


class UnderageError(Exception):
    def __init__(self, age):
        super().__init__(f"User age {age} is below minimum age requirement of 18")


# Registration Service
class RegistrationService:

    def register_user(self, email: str, age: int) -> bool:

        # Internal assertion
        assert email is not None, "Email cannot be None"

        # Email validation
        if email.strip() == "":
            raise InvalidEmailError(email)

        pattern = r'^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}$'

        if not re.match(pattern, email):
            raise InvalidEmailError(email)

        # Age validation
        if age < 18:
            raise UnderageError(age)

        return True


# ---------------- PYTEST TEST CASES ----------------

@pytest.fixture
def service():
    return RegistrationService()


def test_successful_registration(service):
    assert service.register_user("test@example.com", 20) is True


def test_invalid_email(service):
    with pytest.raises(InvalidEmailError):
        service.register_user("wrong-email", 20)


def test_empty_email(service):
    with pytest.raises(InvalidEmailError):
        service.register_user("", 20)


def test_underage_user(service):
    with pytest.raises(UnderageError):
        service.register_user("test@example.com", 15)


def test_none_email_assertion(service):
    with pytest.raises(AssertionError):
        service.register_user(None, 20)


# Optional manual execution
if __name__ == "__main__":

    service = RegistrationService()

    try:
        result = service.register_user("test@example.com", 18)
        print("Registration Successful:", result)

    except Exception as e:
        print(e)
