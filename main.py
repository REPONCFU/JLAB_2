import hashlib


def hash_message(message, algorithm="sha256"):
    """
    Хеширование сообщения с использованием заданного алгоритма.
    """
    algorithms = {
        "sha256": hashlib.sha256,
        "sha512": hashlib.sha512,
        "md5": hashlib.md5
    }

    if algorithm not in algorithms:
        raise ValueError(f"Неподдерживаемый алгоритм: {algorithm}")

    hasher = algorithms[algorithm]()
    hasher.update(message.encode('utf-8'))
    return hasher.hexdigest()


if __name__ == "__main__":
    print("Добро пожаловать в хешер!")
    print("Поддерживаемые алгоритмы: sha256, sha512, md5")

    while True:
        message = input("\nВведите сообщение для хеширования (или 'выход' для завершения): ")
        if message.lower() == "выход":
            print("Программа завершена.")
            break
        algorithm = input("Введите алгоритм (sha256, sha512, md5): ").lower().strip() or "sha256"
        try:
            print(f"Хэш ({algorithm}): {hash_message(message, algorithm)}")
        except ValueError as e:
            print(e)
