class Acount():
  def __init__(self, name, balance):
    self.name = name
    self.balance = balance
  def deposit(self, amount):
    self.balance += amount
    print(f"Deposited {amount} to {self.name}'s account")
  def withdraw(self, amount):
    if self.balance >= amount:
      self.balance -= amount
      print(f"Withdraw {amount} from {self.name}'s account")
    else:
      print(f"Insufficient balance in {self.name}'s account")
  def check_balance(self):
    print(f"Balance in {self.name}'s account: {self.balance}")

class Saving_Account(Acount):
  def __init__(self, name, balance, interest_rate):
    super().__init__(name, balance)
    self.interest_rate = interest_rate
  def calculate_interest(self):
    interest = self.balance * self.interest_rate
    self.balance += interest
    print(f"Interest earned: {interest}")
  def check_balance(self):
    print(f"Balance in {self.name}'s account: {self.balance}")

class Current_Account(Acount):
  def __init__(self, name, balance, overdraft_limit):
    super().__init__(name, balance)
    self.overdraft_limit = overdraft_limit
  def withdraw(self, amount):
    if self.balance + self.overdraft_limit >= amount:
      self.balance -= amount
      print(f"Withdraw {amount} from {self.name}'s account")
    else:
      print(f"Insufficient balance in {self.name}'s account")
  def check_balance(self):
    print(f"Balance in {self.name}'s account: {self.balance}")

# Create an instance of the Saving_Account class
savings_account = Saving_Account("John Doe", 1000, 0.05)
# Create an instance of the Current_Account class
current_account = Current_Account("Jane Doe", 5000, -1000)
# Deposit money into the savings account
savings_account.deposit(500)
# Withdraw money from the savings account
savings_account.withdraw(200)
# Calculate interest for the savings account
savings_account.calculate_interest()
# Check the balance of the savings account
savings_account.check_balance()
# Deposit money into the current account
current_account.deposit(1000)
# Withdraw money from the current account
current_account.withdraw(2000)
# Check the balance of the current account
current_account.check_balance()
