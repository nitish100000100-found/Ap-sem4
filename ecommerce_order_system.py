from abc import ABC, abstractmethod


# ====================== ORDERS ======================

class Order(ABC):
    def __init__(self, order_id, amount):
        self.order_id = order_id
        self.amount = amount

    @abstractmethod
    def get_total(self):
        pass


class RegularOrder(Order):
    def get_total(self):
        return self.amount


class DiscountedOrder(Order):
    def get_total(self):
        return self.amount * 0.9   # 10% discount


class PriorityOrder(Order):
    def get_total(self):
        return self.amount + 100   # priority fee


# ====================== PAYMENT ======================

class Payment(ABC):
    @abstractmethod
    def pay(self, amount):
        pass


class CreditCard(Payment):
    def pay(self, amount):
        print(f"Credit Card payment of {amount} successful")


class UPI(Payment):
    def pay(self, amount):
        print(f"UPI payment of {amount} successful")


class Wallet(Payment):
    def pay(self, amount):
        print(f"Wallet payment of {amount} successful")


# ====================== NOTIFICATION ======================

class Notification(ABC):
    @abstractmethod
    def send(self, message):
        pass


class Email(Notification):
    def send(self, message):
        print(f"Email Sent: {message}")


class SMS(Notification):
    def send(self, message):
        print(f"SMS Sent: {message}")


class Push(Notification):
    def send(self, message):
        print(f"Push Notification Sent: {message}")


# ====================== STORAGE ======================

class Storage(ABC):
    @abstractmethod
    def save(self, order):
        pass


class Database(Storage):
    def save(self, order):
        print(f"Order {order.order_id} saved in Database")


class FileStorage(Storage):
    def save(self, order):
        print(f"Order {order.order_id} saved in File")


# ====================== ORDER SERVICE ======================

class OrderService:
    def __init__(self, payment, notification, storage):
        self.payment = payment
        self.notification = notification
        self.storage = storage

    def place_order(self, order):

        total = order.get_total()

        # payment
        self.payment.pay(total)

        # notification
        self.notification.send(
            f"Order {order.order_id} placed successfully"
        )

        # storage
        self.storage.save(order)


# ====================== MAIN ======================

# Order
order1 = RegularOrder(101, 5000)

# Dependencies Injection
payment_method = UPI()
notification_method = Email()
storage_method = Database()

# Service
service = OrderService(
    payment_method,
    notification_method,
    storage_method
)

# Process Order
service.place_order(order1)


print("\n------------------\n")

# Another Order Example
order2 = DiscountedOrder(102, 10000)

service2 = OrderService(
    CreditCard(),
    SMS(),
    FileStorage()
)

service2.place_order(order2)
