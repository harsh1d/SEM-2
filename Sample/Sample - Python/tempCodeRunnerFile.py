import matplotlib.pyplot as plt

# Sample data
x = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']
y1 = [100, 80, 60, 40, 20, 100, 80, 60, 40, 20, 100, 80]
y2 = [80, 60, 40, 20, 100, 80, 60, 40, 20, 100, 80, 60]

# Create a figure and axis
fig, ax = plt.subplots()

# Plot the data
ax.plot(x, y1, label='Series 1')
ax.plot(x, y2, label='Series 2')

# Set the labels and title
ax.set_xlabel('Month')
ax.set_ylabel('Value')
ax.set_title('Sample Line Graph')

# Show the legend
ax.legend()

# Show the plot
plt.show()