import pandas as pd
data={'apples':[3,2,0,1],'oranges':[0,3,7,2]}
#sale=pd.DataFrame(data)
sale=pd.DataFrame(data,index=["Mon","Tues","Wed","Thu"])
print(sale)
