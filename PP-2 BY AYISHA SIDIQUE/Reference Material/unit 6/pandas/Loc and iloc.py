import pandas as pd
data=pd.read_csv("IMDB-Movie-Data.csv",index_col="Title")
#s=input("Input movie name")
#movie=data.loc[s]
#print(movie)

movie=data.loc['Split':'Gold']#Gold included
#print(movie)

movie=data.iloc[10]
#print(movie)

movie=data.iloc[10:13]#index 13 not included
print(movie)
