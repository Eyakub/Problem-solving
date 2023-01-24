from Crypto.Cipher import ARC4
from Crypto.Hash import SHA
from Crypto.Random import get_random_bytes
import binascii
import hashlib


# 95954949366 10badda2bc13e9772c71
plaintext = "95954949366"
key = '74LJHN7SRJ46P'.encode()
hex_value = "10b6d1a3b11ee47d29713e"


def encrypt(plaintext, key):
    plaintext = plaintext.encode('ascii')
    cipher = ARC4.new(key)
    cipher_text = cipher.encrypt(plaintext)
    print(binascii.hexlify(cipher_text).decode())

    return cipher_text


def decrypt(encrypted_value, key):
    encrypted_value = binascii.unhexlify(encrypted_value)
    print("Temp: ", key)
    cipher = ARC4.new(key)
    return cipher.decrypt(encrypted_value)


ciphertext = encrypt(plaintext, key)

# res = decrypt(ciphertext, key)
res = decrypt(hex_value, key)

print("\nMessage:\t", plaintext)
print("Key:\t\t", key)
print("Ciphertext:\t\t", binascii.hexlify(ciphertext).decode())

# print("\n\nEncrypted Value: ", ciphertext)
print("Decrypt value: ", res.decode())
