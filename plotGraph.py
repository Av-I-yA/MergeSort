import matplotlib.pyplot as plt

Y_it_axis = list()
Y_re_axis = list()

with open("results_it.txt") as results_it_file:
    for number in results_it_file:
        Y_it_axis.append(int(number))

with open("results_re.txt") as results_re_file:
    for number in results_re_file:
        Y_re_axis.append(int(number))

X_axis = [10**i for i in range(1, len(Y_it_axis)+1)]


plt.figure(figsize=(10, 6))

plt.plot(X_axis, Y_it_axis, label='Iterative MergeSort', marker='o', linewidth=2)
plt.plot(X_axis, Y_re_axis, label='Recursive MergeSort', marker='s', linestyle='--', linewidth=2)

plt.xscale('log')
plt.yscale('log')

plt.xlabel('Input Size (n)', fontsize=12)
plt.ylabel('Execution Time (nSecs)', fontsize=12)

plt.grid(True, which="both", linestyle=':', alpha=0.5)
plt.legend(frameon=True, shadow=True)

plt.tight_layout()
plt.savefig('mergesort_comparison.png', dpi=300)