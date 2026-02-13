import random

def generate_samples(filename="samples.txt"):
    sizes = [10**i for i in range(1, 9)]

    with open(filename, "w") as f:
        for size in sizes:       
            for i in range(size):
                num = random.randint(0, 100)
                if i == size - 1:
                    f.write(f"{num}")
                else:
                    f.write(f"{num} ")          
            f.write("\n")


if __name__ == "__main__":
    generate_samples()