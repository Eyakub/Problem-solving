def outer():
    x = 10
    def inner():
        return 20 + x
    return inner()

# my_f = outer
# print(my_f())


def has_permission(page):
    def permission(username):
        if username.lower() == "admin":
            return f"{username} has access to page {page}"
        else:
            return f"{username} has no access to page {page}"
    return permission

check_admin_page_permission = has_permission("Admin Page")
print(check_admin_page_permission("admin"))
print(check_admin_page_permission("eyakub"))