import pandas as pd
data=pd.read_csv("IMDB-Movie-Data.csv",index_col="Title")
#g=data['Genre']#case sensitive
#print(g)
#print(type(g))

'''g=data[['Genre']]#case sensitive
print(g)
print(type(g))'''

'''g=data[['Genre','Rating']]#case sensitive
print(g.head())'''

g=data[['Year']]#case sensitive
print(g.describe())
