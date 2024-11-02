class Acount():
  """
  A class representing an account with basic deposit, withdraw, and balance check functionality
  """
  def __init__(self, name, balance):
    """
    Initialize the account with a name and initial balance
    """
    self.name = name
    self.balance = balance
  def deposit(self, amount):
    """
    Deposit the specified amount into the account
    """
    self.balance += amount
    print(f"Deposited {amount} to {self.name}'s account")
  def withdraw(self, amount):
    """
    Withdraw the specified amount from the account if sufficient balance is available
    """
    if self.balance >= amount:
      self.balance -= amount
      print(f"Withdraw {amount} from {self.name}'s account")
    else:
      print(f"Insufficient balance in {self.name}'s account")
  def check_balance(self):
    """
    Print the current balance of the account
    """
    print(f"Balance in {self.name}'s account: {self.balance}")

class Saving_Account(Acount):
  """
  A class representing a savings account with additional functionality to calculate interest
  """
  def __init__(self, name, balance, interest_rate):
    super().__init__(name, balance)
    self.interest_rate = interest_rate
  def calculate_interest(self):
    """
    Calculate and add interest to the account balance
    """
    interest = self.balance * self.interest_rate
    self.balance += interest
    print(f"Interest earned: {interest}")
  def check_balance(self):
    """
    Print the current balance of the savings account
    """
    print(f"Balance in {self.name}'s account: {self.balance}")

class Current_Account(Acount):
  """
  A class representing a current account with additional functionality to handle overdraft limits
  """
  def __init__(self, name, balance, overdraft_limit):
    super().__init__(name, balance)
    self.overdraft_limit = overdraft_limit
  def withdraw(self, amount):
    """
    Withdraw the specified amount from the current account, considering the overdraft limit if necessary
    """
    if self.balance + self.overdraft_limit >= amount:
      self.balance -= amount
      print(f"Withdraw {amount} from {self.name}'s account")
    else:
      print(f"Insufficient balance in {self.name}'s account")
  def check_balance(self):
    """
    Print the current balance of the current account
    """
    print(f"Balance in {self.name}'s account: {self.balance}")

# Get user input
name = input("Enter name for the savings account:")
balance = float(input("Enter initial balance for the savings account:"))
interest_rate = float(input("Enter interest rate for the savings account:"))
savings_account = Saving_Account(name, balance, interest_rate)

name = input("Enter name for the current account:")
balance = float(input("Enter initial balance for the current account:"))
overdraft_limit = float(input("Enter overdraft limit for the current account:"))
current_account = Current_Account(name, balance, overdraft_limit)

# Deposit and withdraw money
amount = float(input("Enter the amount to deposit into the savings account:"))
savings_account.deposit(amount)

amount = float(input("Enter the amount to withdraw from the savings account:"))
savings_account.withdraw(amount)

savings_account.calculate_interest()
savings_account.check_balance()

amount = float(input("Enter the amount to deposit into the current account:"))
current_account.deposit(amount)

amount = float(input("Enter the amount to withdraw from the current account:"))
current_account.withdraw(amount)
current_account.check_balance()