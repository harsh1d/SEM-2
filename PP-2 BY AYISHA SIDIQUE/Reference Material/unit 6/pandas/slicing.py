import pandas as pd
data=pd.read_csv("IMDB-Movie-Data.csv",index_col="Title")
print(data['Genre'])
#print(data.describe())


