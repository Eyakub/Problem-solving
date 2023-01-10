# pip install pycryptodome

from Crypto.Cipher import AES
import hashlib
import binascii
from Crypto.Random import get_random_bytes
from Crypto import Random


plaintext = '{"userid": "12345", "amount": 100.0, "tournament_id": 999}'
password = '703273357638792F423F4428472B4B6250655368566D597133743677397A2443'


def encrypt(plaintext, key, mode):
    encobj = AES.new(key, mode)
    ciphertext, authTag = encobj.encrypt_and_digest(plaintext)
    return (ciphertext, authTag, encobj.nonce)


def decrypt(ciphertext, key, mode):
    (ciphertext,  authTag, nonce) = ciphertext
    encobj = AES.new(key,  mode, nonce)
    return (encobj.decrypt_and_verify(ciphertext, authTag))


key = hashlib.sha256(password.encode()).digest()

print("GCM Mode: Stream cipher and authenticated")
print("\nMessage:\t", plaintext)
print("Key:\t\t", password)


ciphertext = encrypt(plaintext.encode(), key, AES.MODE_GCM)

print("Cipher:\t\t", binascii.hexlify(ciphertext[0]))
print("Auth Msg:\t", binascii.hexlify(ciphertext[1]))
print("Nonce:\t\t", binascii.hexlify(ciphertext[2]))


res = decrypt(ciphertext, key, AES.MODE_GCM)


print("\n\nEncrypted:\t", ciphertext)
print("Decrypted:\t", res.decode())
