import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_excel("runtime.xlsx","Sheet1") 

N = df['N'].values.tolist()

iteTime = df['Ite. Time (s)'].values.tolist()

recTime = df['Rec. Time (s)'].values.tolist()

print(N, iteTime, recTime)

axis_10 = plt.axis([1, 10, 0, 100])
axis_20 = plt.axis([1, 20, 0, 1000])
axis_30 = plt.axis([1, 30, 0, 10000])
axis_40 = plt.axis([1, 40, 0, 1.2])

plt.plot(N, iteTime, label = 'Iterative', color='blue')

plt.plot(N, recTime, label = 'Recursive', color='red')

plt.title('     Fibonacci Sequence Execution Runtime Comparison (N = 40)')

plt.xlabel('Executions (dN)')

plt.ylabel('Runtime (seconds)')

plt.legend()

plt.grid('TRUE')

plt.show()
