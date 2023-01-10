from Crypto import Random
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad
import hashlib
import binascii


plaintext = '{"userid": "12345", "amount": 100.0, "tournament_id": 999}'
password = '703273357638792F423F4428472B4B6250655368566D597133743677397A2443'
SIGNATURE = None


def encrypt(value, key, mode):
    value = value.encode('ascii')
    iv = Random.new().read(AES.block_size)
    cipher = AES.new(key, mode, iv)
    ciphertext = cipher.encrypt((value))
    global SIGNATURE
    SIGNATURE = f"{binascii.hexlify(iv).decode('utf-8')}:{binascii.hexlify(ciphertext).decode('utf-8')}"
    return iv + ciphertext


def decrypt(encrypted_value, key, mode):
    iv = encrypted_value[:AES.block_size]
    cipher = AES.new(key, mode, iv)
    return cipher.decrypt(encrypted_value[AES.block_size:])


key = hashlib.sha256(password.encode()).digest()

ciphertext = encrypt(plaintext, key, AES.MODE_GCM)

print("\t\tGCM Mode:")
print("\nMessage:\t", plaintext)
print("Key:\t\t", password)

res = decrypt(ciphertext, key, AES.MODE_GCM)

print("\n\nEncrypted:\t", ciphertext)
print("Decrypted:\t", res.decode())
print("Header Value:\t", SIGNATURE)
