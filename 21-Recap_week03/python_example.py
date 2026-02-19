from abc import ABC, abstractmethod

#Abstract Base Class
class Account(ABC):
    def __init__(self, name, balance):
        self.name = name
        self.__balance = balance   #Encapsulation

    @abstractmethod
    def calculate_interest(self):
        pass

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance

    #Operator Overloading (>)
    def __gt__(self, other):
        return self.__balance > other.__balance


class SavingsAccount(Account):
    def calculate_interest(self):   #Polymorphism
        return self.get_balance() * 0.05


acc1 = SavingsAccount("Ali", 5000)
acc2 = SavingsAccount("Ahmed", 3000)

print("Interest (Ali):", acc1.calculate_interest())
print("Interest (Ahmed):", acc2.calculate_interest())

if acc1 > acc2:
    print("Ali has higher balance")
else:
    print("Ahmed has higher balance")
