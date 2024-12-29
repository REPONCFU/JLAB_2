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


def save_to_file(filename, data):
    """
    Сохранение данных в файл.
    """
    with open(filename, "a") as file:
        file.write(data + "\n")


if __name__ == "__main__":
    print("Добро пожаловать в хешер!")
    print("Поддерживаемые алгоритмы: sha256, sha512, md5")
    output_file = "hash_results.txt"

    while True:
        message = input("\nВведите сообщение для хеширования (или 'выход' для завершения): ")
        if message.lower() == "выход":
            print(f"Результаты сохранены в файл: {output_file}")
            break
        algorithm = input("Введите алгоритм (sha256, sha512, md5): ").lower().strip() or "sha256"
        try:
            hashed = hash_message(message, algorithm)
            print(f"Хэш ({algorithm}): {hashed}")
            save_to_file(output_file, f"{message} ({algorithm}): {hashed}")
        except ValueError as e:
            print(e)
