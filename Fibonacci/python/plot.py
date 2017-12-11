import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_excel("runtime.xlsx","Sheet1") 

N = df['N'].values.tolist()
recclicks = df['Rec. Clicks'].values.tolist()

print(N, recclicks)
plt.axis([0, 50, 0, 120000000])
plt.plot(N, recclicks)
plt.title('Recursive Fibonacci Sequence Clicks (dC/dN)')
plt.xlabel('N')
plt.ylabel('Number of Clicks (in hundreds of millions) ')
plt.show()
