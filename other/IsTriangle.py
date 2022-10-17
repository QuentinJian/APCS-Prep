import time
start_time = time.time()
def is_triangle(sides):
    sides = sorted(sides)
    if sides[2] >= sides[0] + sides[1]:
        return "No"
    elif sides[2]**2 == (sides[0]**2 + sides[1]**2):
        return "Right"
    elif sides[2]**2 > (sides[0]**2 + sides[1]**2):
        return "Obtuse"
    else:
        return "Acute"

triangle_sides = input().split()
triangle_sides = list(map(int, triangle_sides))
print(is_triangle(triangle_sides))
print("--- %s seconds ---" % (time.time() - start_time))