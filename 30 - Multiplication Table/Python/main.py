def main(maxn):
    for i in range(0, maxn + 1):
        for j in range(0, maxn + 1):
            print(f"{i} x {j} = {i * j}")


if __name__ == "__main__":
    main(12)
