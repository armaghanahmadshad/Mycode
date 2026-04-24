class Student:
    # Class attributes (optional if you define them in __init__)
    __roll = "" 
    __name = ""

    # 'self' must be the first argument
    def set_data(self, r, n):
        self.__roll = r
        self.__name = n

    def display(self):
        # Access attributes via self
        print("Roll: " + self.__roll)
        print("Name: " + self.__name)

# Execution
s1 = Student()
s1.set_data("101", "Rere") # Use the setter method
s1.display()