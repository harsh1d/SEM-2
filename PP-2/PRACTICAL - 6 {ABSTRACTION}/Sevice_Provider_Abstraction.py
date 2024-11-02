class Sevice_Provider:
  def __init__(self):
    self.ServiceProviderID=None
    self.ServiceProviderName=None
    self.ServiceProviderAddress=None

  def ABC(self):
    pass

  def XYZ(self,ServiceType):
    if(ServiceType == 'Airtel'):
      A=input("Enter How Many minutes U Have To Calculate For Airtel = ")
      B=float(A)
      C=B*1.0
      print("Your Bill Is",C)
    elif(ServiceType == 'Jio'):
      D=input("Enter How Many minutes U Have To Calculate For Jio = ")
      E=float(A)
      F=B*0.75
      print("Your Bill Is",F)
    elif(ServiceType == 'Vodafone'):
      L=input("Enter How Many minutes U Have To Calculate For Vodafone = ")
      M=float(A)
      O=B*0.90
      print("Your Bill Is",O)
    else:
      print("Invalid Input!!!")


class Jio(Sevice_Provider):
  def __init__(self,ServiceProviderID,ServiceProviderName,ServiceProviderAddress):
    self.ServiceProviderID = ServiceProviderID
    self.ServiceProviderName = ServiceProviderName
    self.ServiceProviderAddress = ServiceProviderAddress

  def ABC(self):
    pass # calculate bill here

class Vodafone(Sevice_Provider):
  def __init__(self,ServiceProviderID,ServiceProviderName,ServiceProviderAddress):
    self.ServiceProviderID = ServiceProviderID
    self.ServiceProviderName = ServiceProviderName
    self.ServiceProviderAddress = ServiceProviderAddress

  def ABC1(self):
    pass


class Airtel(Sevice_Provider):
  def __init__(self,ServiceProviderID,ServiceProviderName,ServiceProviderAddress):
    self.ServiceProviderID = ServiceProviderID
    self.ServiceProviderName = ServiceProviderName
    self.ServiceProviderAddress = ServiceProviderAddress

  def ABC2(self):
    pass # calculate bill here


# class Sevice_Provider:
#   def ABC(self):
#     pass

#   def XYZ(self):
#     A=input("Enter How Many minutes U Have To Calculate For Airtel = ")
#     B=int(A)
#     C=B*1.0
#     print("Your Bill Is",C)

#   def DEF(self):
#     D=input("Enter How Many minutes U Have To Calculate For Jio = ")
#     E=int(A)
#     F=B*0.75
#     print("Your Bill Is",F)

#   def LMO(self):
#     L=input("Enter How Many minutes U Have To Calculate For Vodafone = ")
#     M=int(A)
#     O=B*0.90
#     print("Your Bill Is",O)


# class Jio(Sevice_Provider):
#   def ABC(self):
#     pass # calculate bill here

# class Vodafone(Sevice_Provider):
#   def ABC1(self):
#     pass


# class Airtel(Sevice_Provider):
#   def ABC2(self):
#          # calculate bill here
  