from abc import ABC, abstractmethod
print("HARSH D")
class ServiceProvider(ABC):
    def __init__(self, name, per_minute_charge):
        self.name = name
        self.per_minute_charge = per_minute_charge

    @abstractmethod
    def calculate_bill(self, minutes):
        pass

class Jio(ServiceProvider):
    def calculate_bill(self, minutes):
        return minutes * self.per_minute_charge

class Airtel(ServiceProvider):
    def calculate_bill(self, minutes):
        return minutes * self.per_minute_charge

class Vodafone(ServiceProvider):
    def calculate_bill(self, minutes):
        return minutes * self.per_minute_charge

def main():
    jio_provider = Jio("Jio", 0.75)
    airtel_provider = Airtel("Airtel", 1.00)
    vodafone_provider = Vodafone("Vodafone", 0.90)

    minutes = int(input("Enter the number of minutes used: "))

    jio_bill = jio_provider.calculate_bill(minutes)
    airtel_bill = airtel_provider.calculate_bill(minutes)
    vodafone_bill = vodafone_provider.calculate_bill(minutes)

    print(f"\nBill details for {jio_provider.name}: ${jio_bill:.2f}")
    print(f"Bill details for {airtel_provider.name}: ${airtel_bill:.2f}")
    print(f"Bill details for {vodafone_provider.name}: ${vodafone_bill:.2f}")

if __name__ == "__main__":
    main()
