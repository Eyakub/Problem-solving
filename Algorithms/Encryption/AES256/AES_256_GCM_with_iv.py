from Crypto import Random
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad
import hashlib
import binascii


plaintext = '{"userid": "12345", "amount": 100.0, "tournament_id": 999}'
password = '703273357638792F423F4428472B4B6250655368566D597133743677397A2443'
SIGNATURE = None


# def encrypt(value, key, mode):
#     value = value.encode('ascii')
#     iv = Random.new().read(AES.block_size)
#     cipher = AES.new(key, mode, iv)
#     ciphertext = cipher.encrypt((value))
#     global SIGNATURE
#     SIGNATURE = f"{binascii.hexlify(iv).decode('utf-8')}:{binascii.hexlify(ciphertext).decode('utf-8')}"
#     return iv + ciphertext


# def decrypt(encrypted_value, key, mode):
#     iv = encrypted_value[:AES.block_size]
#     cipher = AES.new(key, mode, iv)
#     return cipher.decrypt(encrypted_value[AES.block_size:])


print("\nMessage:\t", plaintext)
print("Key:\t\t", password)


def encrypt(plaintext, key, mode):
    iv = Random.new().read(AES.block_size)
    encobj = AES.new(key, mode, iv)
    ciphertext, authTag = encobj.encrypt_and_digest(plaintext)
    print("\nInside Encrypt")
    print("Nonce: ", binascii.hexlify(encobj.nonce))
    print("AuthTag:", binascii.hexlify(authTag))
    print("IV: ", binascii.hexlify(iv))
    global SIGNATURE
    SIGNATURE = f"{binascii.hexlify(iv).decode('utf-8')}:{binascii.hexlify(ciphertext).decode('utf-8')}:{binascii.hexlify(encobj.nonce).decode('utf-8')}"
    return (ciphertext, authTag, encobj.nonce)


def decrypt(ciphertext, key, mode):
    (ciphertext, authTag, nonce) = ciphertext
    encobj = AES.new(key, mode, nonce)
    print("\nInside Decrypt")
    print("AuthTag: ", binascii.hexlify(authTag))
    print("Nonce: ", binascii.hexlify(nonce))
    return (encobj.decrypt_and_verify(ciphertext, authTag))


key = hashlib.sha256(password.encode()).digest()

ciphertext = encrypt(plaintext.encode(), key, AES.MODE_GCM)

res = decrypt(ciphertext, key, AES.MODE_GCM)

print("Cipher:\t\t", binascii.hexlify(ciphertext[0]))
print("Auth Msg:\t", binascii.hexlify(ciphertext[1]))
print("Nonce:\t\t", binascii.hexlify(ciphertext[2]))
print("\n\nDecrypted:\t", res.decode())

print("Header Value:\t", SIGNATURE)
