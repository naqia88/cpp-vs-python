x = 100  #Global Scope

def show_scopes():
    x = 10        #Local Scope (function level)
    print("Function local x:", x)

    #Enclosing Scope Example
    def inner():
        y = "Enclosing Scope Variable"
        print(y)

    inner()
    print("Function local x after inner():", x)


def change_global():
    global x
    x = 200
    print("Global x changed inside function:", x)


print("Global x before function call:", x)
show_scopes()

change_global()
print("Global x after modification:", x)
