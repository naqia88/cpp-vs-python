class BankAccount:
    def __init__(self, balance):
        self.__balance = balance   #Encapsulated data

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def get_balance(self):
        return self.__balance

acc = BankAccount(1000)
acc.deposit(500)
print("Balance:", acc.get_balance())
