from Crypto import Random
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad
import hashlib
import binascii
import re


# plaintext = '{"userid": "12345", "amount": 100.0, "tournament_id": 999, "currency": "GoTokins"}'
plaintext = '{"userid": "626b5188d1646c0009f1668b", "name": "syakirahassss", "profile_pic_url": "https://d2l5xoare4pq97.cloudfront.net/943f7f4e-d4b2-4393-9247-ffc2660ab91d/profile/1663642636334.png"}'

checksum = "43ba75b2a1ed2f3209594b25:c7b0a0df001a3288212b84bca7bcfa2cb8d85fbb3e64ad73a21278f44f30d5419cf3abb95408389035aa93d8c335f10bb7d8b367af44f3f345b6b6e282608fa89f801468c50b59337f8acb5208ef1864eae792917ed88cb55f7beb2f8a1eaf3269f255141fe9b44b1678ae46e1d52fac22f230dd2c80855301755975cc4b4fe5875b19a6ecd0433278d959:d6d33569eae9a440fc36aaf6bf609e28"
payload_hex = "c7b0a0df001a3288212b84bca7bcfa2cb8d85fbb3e64ad73a21278f44f30d5419cf3abb95408389035aa93d8c335f10bb7d8b367af44f3f345b6b6e282608fa89f801468c50b59337f8acb5208ef1864eae792917ed88cb55f7beb2f8a1eaf3269f255141fe9b44b1678ae46e1d52fac22f230dd2c80855301755975cc4b4fe5875b19a6ecd0433278d959"
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
    print(ciphertext)
    return (ciphertext, authTag, encobj.nonce)


# def decrypt(ciphertext, key, mode):
#     (ciphertext, authTag, iv) = ciphertext
#     encobj = AES.new(key, mode, iv)
#     return (encobj.decrypt_and_verify(ciphertext, authTag))


def decrypt(ciphertext, key, mode):
    ciphertext = ciphertext.split(":")
    (ciphertext, authTag, iv) = binascii.unhexlify(ciphertext[1]), binascii.unhexlify(ciphertext[2]), binascii.unhexlify(ciphertext[0])
    encobj = AES.new(key, mode, iv)
    return (encobj.decrypt_and_verify(ciphertext, authTag))


# key = hashlib.sha256(password.encode()).digest()
key = binascii.unhexlify(password.encode())

# ciphertext = encrypt(plaintext.encode(), key, AES.MODE_GCM)


# as Googly passing us a hexify value following the pattern {iv}:{encryptedPayload}:{authTag}
res = decrypt(checksum, key, AES.MODE_GCM)
# getting the string in a whole so had to split them.
res = re.split(r'[&$]', res.decode())
# print("Cipher:\t\t", binascii.hexlify(ciphertext[0]))
# print("Auth Msg:\t", binascii.hexlify(ciphertext[1]))
# print("Nonce:\t\t", binascii.hexlify(ciphertext[2]))
print("\n\nDecrypted:\t", res)

print("Header Value:\t", SIGNATURE)
