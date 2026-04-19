# Take marks → print grade:
# 90+ → A
# 70+ → B
# 50+ → C
# else → Fail
a=int(input("Enter your marks:"))
if a>=90:
    print("A")
elif a>=70:
    print("B")
elif a>=50:
    print("C")
else:
    print("Fail")