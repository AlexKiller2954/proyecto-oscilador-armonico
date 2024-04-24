import numpy as np
import matplotlib.pyplot as plt
import glob

def sort_by_number(filename):
    return int(filename.split("_")[1].split(".")[0])

files = sorted(glob.glob(f"onda_*.txt"), key=sort_by_number)

for file in files:
    print(file)
    data = np.loadtxt(file)
    x = data[:, 0]
    y = data[:, 1]

    state_number = int(file.split("_")[1].split(".")[0])

    plt.plot(x, y, label=f"Estado {state_number}")

plt.xlabel("x")
plt.ylabel("$y(x)$")
plt.title("Funciones de onda")
plt.legend()
plt.grid()
plt.savefig("funciones_de_onda.png")

