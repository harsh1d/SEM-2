import pandas as pd
data=pd.read_csv("IMDB-Movie-Data.csv",index_col="Title")
#print(data.head(2))#1st 5 by default
print(data.tail(10))#last 5 by default


#print(data.head(2))

