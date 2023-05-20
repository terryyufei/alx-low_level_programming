def is_palindrome(n):
    # Convert the number to a string and check if it's a palindrome
    return str(n) == str(n)[::-1]

largest_palindrome = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        product = i * j
        if product > largest_palindrome and is_palindrome(product):
            largest_palindrome = product
            break

# Save the result to the file
with open('102-result', 'w') as file:
    file.write(str(largest_palindrome))