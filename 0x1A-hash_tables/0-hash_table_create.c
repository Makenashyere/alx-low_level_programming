class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [None] * self.size

    def hash_function(self, key):
        return key % self.size

    def insert(self, key, value):
        index = self.hash_function(key)
        if self.table[index] is None:
            self.table[index] = [(key, value)]
        else:
            self.table[index].append((key, value))

    def search(self, key):
        index = self.hash_function(key)
        if self.table[index] is None:
            return None
        else:
            for k, v in self.table[index]:
                if k == key:
                    return v
            return None

def hash_table_create(size):
    if size <= 0:
        return None
    return HashTable(size)
