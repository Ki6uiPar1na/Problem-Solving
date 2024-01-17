from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
from Crypto.Util.Padding import pad, unpad

def generate_key():
    # Generate a random 256-bit (32-byte) key
    return get_random_bytes(32)

def encrypt_message(message, key):
    # Create an AES cipher object with the provided key and AES.MODE_CBC mode
    cipher = AES.new(key, AES.MODE_CBC)
    
    # Pad the message to be a multiple of 16 bytes (AES block size)
    padded_message = pad(message.encode('utf-8'), AES.block_size)
    
    # Encrypt the padded message
    ciphertext = cipher.encrypt(padded_message)
    
    # Return the IV (Initialization Vector) and the ciphertext
    return cipher.iv, ciphertext

def decrypt_message(iv, ciphertext, key):
    # Create an AES cipher object with the provided key, AES.MODE_CBC mode, and the IV
    cipher = AES.new(key, AES.MODE_CBC, iv)
    
    # Decrypt the ciphertext
    decrypted_message = unpad(cipher.decrypt(ciphertext), AES.block_size)
    
    # Return the decrypted message as a string
    return decrypted_message.decode('utf-8')

# Example usage
if __name__ == "__main__":
    # Generate a random key
    key = generate_key()

    # Message to be encrypted
    original_message = "Hi...."

    # Encrypt the message
    iv, ciphertext = encrypt_message(original_message, key)
    print("Encrypted message:", ciphertext.hex())

    # Decrypt the message
    decrypted_message = decrypt_message(iv, ciphertext, key)
    print("Decrypted message:", decrypted_message)
