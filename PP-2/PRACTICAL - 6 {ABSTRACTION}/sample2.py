from abc import ABC, abstractmethod
print("HARSH D")
class ServiceProvider(ABC):
    def __init__(self, name, per_minute_charge):
        self.name = name
        self.per_minute_charge = per_minute_charge

    @abstractmethod
    def calculate_bill(self, minutes):
        pass

    def get_lowest_bill(self, minutes):
        providers = [self, Jio("Jio", 0.75), Airtel("Airtel", 1.00), Vodafone("Vodafone", 0.90)]
        lowest_bill = float('inf')
        lowest_provider = None

        for provider in providers:
            bill = provider.calculate_bill(minutes)
            if bill < lowest_bill:
                lowest_bill = bill
                lowest_provider = provider.name

        return lowest_provider, lowest_bill

class Jio(ServiceProvider):
    def calculate_bill(self, minutes):
        return minutes * self.per_minute_charge

class Airtel(ServiceProvider):
    def calculate_bill(self, minutes):
        return minutes * self.per_minute_charge

class Vodafone(ServiceProvider):
    def calculate_bill(self, minutes):
        return minutes * self.per_minute_charge


jio_provider = Jio("Jio", 0.75)
airtel_provider = Airtel("Airtel", 1.00)
vodafone_provider = Vodafone("Vodafone", 0.90)

minutes = int(input("Enter the number of minutes used: "))

lowest_provider, lowest_bill = jio_provider.get_lowest_bill(minutes)

print(f"\nBill details for {jio_provider.name}: ${jio_provider.calculate_bill(minutes):.2f}")
print(f"Bill details for {airtel_provider.name}: ${airtel_provider.calculate_bill(minutes):.2f}")
print(f"Bill details for {vodafone_provider.name}: ${vodafone_provider.calculate_bill(minutes):.2f}")
print(f"Lowest bill provider: {lowest_provider}")
print(f"Lowest bill amount: ${lowest_bill:.2f}")
