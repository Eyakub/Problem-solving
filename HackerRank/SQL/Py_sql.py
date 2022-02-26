def create_user(username, email, password):
    mycurosr.execute("INSERT INTO UserAccount (username, email, password) VALUES (%s, %s, %s)", (username, email, password))


def login(username, password):
    mycursor.execute("SELECT * FROM UserAccount WHERE username = %s AND password = %s", (username, password))
    user = mycursor.fetchone()
    if user is None:
        print("Login failed")
    else:
        print("Login successful")