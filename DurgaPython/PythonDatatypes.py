datatypes = [item for item in dir(__builtins__) if item.islower() and not item.startswith("__")]
print(datatypes)
