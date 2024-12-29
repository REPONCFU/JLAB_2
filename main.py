import hashlib

def hash_message(message):
    """
    Хеширование сообщения с использованием SHA-256.
    """
    return hashlib.sha256(message.encode('utf-8')).hexdigest()

if __name__ == "__main__":
    message = input("Введите сообщение для хеширования: ")
    print(f"SHA-256 хэш: {hash_message(message)}")
