import hashlib

def hash_message(message):
    """
    Хеширование сообщения с использованием SHA-256.
    """
    sha256_hash = hashlib.sha256(message.encode()).hexdigest()
    print(f"SHA-256 хэш: {sha256_hash}")

if __name__ == "__main__":
    message = "Hello, Cryptography!"
    hash_message(message)
