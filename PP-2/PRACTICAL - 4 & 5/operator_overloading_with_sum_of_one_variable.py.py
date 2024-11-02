class S:
  def __init__(self,n1,n2):
      self.n1=n1
      self.n2=n2


  def __add__(self,other):
      s1=self.n1+other.n1
      s2=self.n2+other.n2
      return S(s1, s2)

s1=S(10,11)
s2=S(22,11)
s3=s1+s2
print((s3.n1, s3.n2))